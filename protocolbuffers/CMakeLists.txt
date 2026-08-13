cmake_minimum_required(VERSION 3.20)

project(addressbook)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Protobuf CONFIG REQUIRED)

add_executable(addressbook
    addressbook.cpp
    addressbook.pb.cc
)

target_link_libraries(addressbook
    PRIVATE
    protobuf::libprotobuf
)

add_executable(list_people
    list_people.cpp
    addressbook.pb.cc
)

target_link_libraries(list_people
    PRIVATE
    protobuf::libprotobuf
)