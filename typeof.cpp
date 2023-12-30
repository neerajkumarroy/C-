#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // Declare a variable
    int myInteger = 42;

    // Use typeid to get type information and name() to get the     name
   cout << "The type of myInteger is: " << typeid(myInteger).name() <<endl;
    cout << "The size of myInteger is: " << sizeof(myInteger) <<" bytes"<<endl;

    // You can also use typeid with other data types
    double myDouble = 3.14;
    cout << "The type of myDouble is: " << typeid(myDouble).name() <<endl;
    cout << "The size of myDouble is: " << sizeof(myDouble) <<" bytes"<<endl;

    char myChar = 'A';
    cout << "The type of myChar is: " << typeid(myChar).name() <<endl;
    cout << "The size of myChar is: " << sizeof(myChar) <<" bytes"<<endl;

    return 0;
}

