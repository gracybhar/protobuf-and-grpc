#include <iostream>
#include <fstream> // this provides read to and write from tools
using namespace std;

// include all of the header files
#include "order.pb.h"
#include "product.pb.h"
#include "user.pb.h"

int main()
{
    // 1) Creates a User
    User user;
    user.set_id(1);
    user.set_name("Gracy");
    user.set_email("gracy@google.com");

    // Creates Products
    Product product1;
    product1.set_id(101);
    product1.set_name("Laptop");
    product1.set_price(1499.99);

    Product product2;
    product2.set_id(102);
    product2.set_name("Keyboard");
    product2.set_price(499.99);

    Product product3;
    product3.set_id(103);
    product3.set_name("Mouse");
    product3.set_price(14.99);

    // Creates an Order
    Order order;
    order.set_order_id(201);
    // user is a message so:
    *order.mutable_user() = user;
    // product is also a message:
    *order.add_products() = product1;
    *order.add_products() = product2;
    *order.add_products() = product3;

    // Serializes the Order to a file (create a .data file)
    // ofstream writes to files
    // ifstream reads from files
    // fstream write/reads to/from files
    // ios::binary = binary mode
    // ios::out → open for writing
    // ios::in =  open for reading
    // ios::trunc = erase existing contents when opening
    ofstream output("order.data", ios::binary);

    if (!order.SerializeToOstream(&output))
    {
        cerr << "Failed to serialize order." << endl;
        return 1;
    }
    output.close();
    // now we have created a new Order object in our .data file
    // the point of this is that we have saved it without having to save a bulky c++ object
    // and it can be accessed later even after this program ends

    // Reads the file back
    Order read_order;
    // Deserializes it
    ifstream input("order.data", ios::binary);
    if (!read_order.ParseFromIstream(&input))
    {
        cerr << "Failed to deserialize order." << endl;
        return -1;
    }
    input.close();

    // Prints everything
    cout
        << "Order ID: " << read_order.order_id() << endl;
    cout << "Customer: " << read_order.user().name() << endl;
    cout << "Email: " << read_order.user().email() << endl;

    // const Product &product means I am referencing every product in this read_order and const means I am only reading and promise not to modify
    for (const Product &product : read_order.products())
    {
        cout << "Product: " << product.name() << endl;
        cout << "Price: $" << product.price() << endl;
    }

    return 0;
}