#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Simple Calculator" << endl;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit with an error code
            }
            result = num1 / num2;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Exit with an error code
    }

    cout << "Result: " << result << endl;

    return 0; // Exit with a success code
}
