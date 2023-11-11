1.Here's an example of the Armstrong number..
    
    153 = (1*1*1)+(5*5*5)+(3*3*3)  
where:  
(1*1*1)=1  
(5*5*5)=125  
(3*3*3)=27  
So:  
1+125+27=153  
_________________________________________________________________________________________________________________________________________________________________
#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int power = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
_________________________________________________________________________________________________________________________________________________________________
output:
Enter a number: 153
153 is an Armstrong number.



    
