#include <iostream>

using namespace std;

// Function to calculate grade points based on the grade
double calculateGradePoints(char grade) {
    switch (grade) {
        case 'A':
        case 'a':
            return 4.0;
        case 'B':
        case 'b':
            return 3.0;
        case 'C':
        case 'c':
            return 2.0;
        case 'D':
        case 'd':
            return 1.0;
        case 'F':
        case 'f':
            return 0.0;
        default:
            return -1.0; // Invalid grade
    }
}

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    double totalCreditHours = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 1; i <= numSubjects; ++i) {
        char grade;
        double creditHours;

        cout << "Enter the grade for subject " << i << ": ";
        cin >> grade;

        cout << "Enter the credit hours for subject " << i << ": ";
        cin >> creditHours;

        double gradePoints = calculateGradePoints(grade);

        if (gradePoints == -1.0) {
            cout << "Invalid grade entered. Please try again." << endl;
            --i; // Decrement i to re-enter current subject
        } else {
            totalGradePoints += gradePoints * creditHours;
            totalCreditHours += creditHours;
        }
    }

    if (totalCreditHours > 0) {
        double cgpa = totalGradePoints / totalCreditHours;
        cout << "Your CGPA is: " << cgpa << endl;
    } else {
        cout << "Error: Total credit hours cannot be zero." << endl;
    }

    return 0;
}
