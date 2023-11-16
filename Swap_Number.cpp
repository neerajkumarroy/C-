#include<iostream>

int main() {
    // Declare two integers
    int num1, num2;

    // Input the values of the two integers
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Display the values before swapping
    std::cout << "\nBefore Swapping:" << std::endl;
    std::cout << "First integer: " << num1 << std::endl;
    std::cout << "Second integer: " << num2 << std::endl;

    // Swap the two integers
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the values after swapping
    std::cout << "\nAfter Swapping:" << std::endl;
    std::cout << "First integer: " << num1 << std::endl;
    std::cout << "Second integer: " << num2 << std::endl;

    return 0;
}

