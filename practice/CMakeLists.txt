cmake_minimum_required(VERSION 3.20)

project(ecommerce)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Protobuf REQUIRED)
find_package(absl REQUIRED)


add_executable(ecommerce
    main.cpp
    user.pb.cc
    product.pb.cc
    order.pb.cc
)

target_link_libraries(ecommerce
    PRIVATE
    protobuf::libprotobuf
    absl::log
    absl::log_internal_check_op
    absl::log_internal_message
)