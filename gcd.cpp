#include <iostream>
using namespace std;

int gcd(int a,int b){
if(b == 0)
    return a;
return gcd(b,a%b);
}

int main() {
	cout<<"Enter the value of a and b:"<<endl;
int a ,b ;

cin>>a>>b;
cout<<gcd(a,b);
return 0;
}

//Output:
//____________________________________________________________________________________
//Enter the value of a and b: 10 20
  10


