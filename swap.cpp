//Swap with a Third Variable:

#include <iostream>\
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int temp;  // Temporary variable to store the value during the swap

    // Swapping the values
    temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "After swapping (with a third variable), num1 = " << num1 << " and num2 = " << num2 << std::endl;

    return 0;
}

//Swap without a Third Variable

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Swapping the values without a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    std::cout << "After swapping (without a third variable), num1 = " << num1 << " and num2 = " << num2 << std::endl;

    return 0;
}


