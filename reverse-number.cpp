#include <iostream>

int main() {
    int size;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Declare an array of integers with the specified size
    int numbers[size];

    // Input elements into the array
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Display the original elements of the array
    std::cout << "Original elements of the array are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Reverse the elements of the array
    for (int i = 0; i < size / 2; ++i) {
        int temp = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = temp;
    }

    // Display the reversed elements of the array
    std::cout << "Reversed elements of the array are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

output:
	Enter the size of array:10
	Enter 10 intigers:
		Element 1:10
		Element 1:20
		Element 1:30
		Element 1:40
		Element 1:50
		Element 1:60
		Element 1:70
		Element 1:80
		Element 1:90
		Element 1:100
		Original elements of the erray are:10 20 30 40 50 60 70 80 90 100
		Reversed elements of the array are:100 90 80 70 60 50 40 30 20 10
