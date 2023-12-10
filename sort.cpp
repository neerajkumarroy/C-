#include <iostream>
#include <algorithm>

void sortEvenOdd(int arr[], int n) {
    // Separate even and odd elements
    int evenCount = 0;
    int oddCount = 0;
    int evenArr[n];
    int oddArr[n];

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        } else {
            oddArr[oddCount++] = arr[i];
        }
    }

    // Sort even and odd arrays
    std::sort(evenArr, evenArr + evenCount);
    std::sort(oddArr, oddArr + oddCount);

    // Merge even and odd arrays back into the original array
    int index = 0;
    for (int i = 0; i < evenCount; ++i) {
        arr[index++] = evenArr[i];
    }

    for (int i = 0; i < oddCount; ++i) {
        arr[index++] = oddArr[i];
    }
}

int main() {
    int n;

    // Input size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];

    // Input array elements
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Call the function to sort even and odd elements separately
    sortEvenOdd(arr, n);

    // Output the sorted array
    std::cout << "Array after sorting even and odd elements separately: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

______________________________________________________________________________________________
Output:
______________________________________________________________________________________________
Enter the size of the array: 10
Enter the elements of the array: 0 1 2 3 4 5 6 7 8 9
Array after sorting even and odd elements separately: 0 2 4 6 8 1 3 5 7 9
