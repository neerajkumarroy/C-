
#include<iostream>
using namespace std;

int main()
{
    
   float subject1, subject2, subject3, subject4, subject5, subject6, marks, percentage;
   
   cout<<"\nEnter Marks of 6 Subjects: ";
   cin>>subject1>>subject2>>subject3>>subject4>>subject5>>subject6;

   marks = subject1 + subject2 + subject3 + subject4 + subject5 + subject6;
 
   percentage = marks / 6;
   cout << "\nPercentage of Marks: " << percentage << " % "<< endl;

   return (0);
}


//This is the another way to calculate the percentage of marks

#include<iostream>

using namespace std;
int main() {
    
    int i, subjects;
    float marks = 0, percentage;

    cout << "\nEnter Total Number of Subjects: \n";
    cin >> subjects;

    int arr[subjects];

    cout << "\nEnter The Marks of All the Subjects: \n";
    for (i = 0; i < subjects; i++) {
        cin >> arr[i];
    }
    for (i = 0; i < subjects; i++) {
        marks = marks + arr[i];
    }

    percentage = marks / subjects;

    cout << "\nPercentage of Marks: " << percentage << " % " << endl;

    return (0);
}