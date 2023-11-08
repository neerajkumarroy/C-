#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Get the current date
    time_t now = time(0);
    tm* current_time = localtime(&now);
    int current_year = current_time->tm_year + 1900; // Adjust for the year offset

    int birth_year, birth_month, birth_day;

    cout << "Enter your birth year: ";
    cin >> birth_year;

    cout << "Enter your birth month (1-12): ";
    cin >> birth_month;

    cout << "Enter your birth day (1-31): ";
    cin >> birth_day;

    // Calculate the age
    int age = current_year - birth_year;

    // Adjust the age if the birth month and day haven't occurred yet this year
    if (birth_month > (current_time->tm_mon + 1) || (birth_month == (current_time->tm_mon + 1) && birth_day > current_time->tm_mday)) {
        age--;
    }

    cout << "Your age is: " << age << " years." << endl;

    return 0;
}
