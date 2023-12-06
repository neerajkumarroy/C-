#include<iostream>
using namespace std;
int main()
{
 //by-Ghanendra Yadav 
  int a,b,q,r;

  cout<<"Enter Two Numbers : \n";
  cin>>a>>b;

 if(a>b)
 {
   q=a/b;
   r=a%b;
   cout<<"\nQuotient="<<q;
   cout<<"\nRemainder="<<r;
 }
 else
  {
   cout<<"\nFirst Number. Should Be Greater Than Second Number….!!!";
 }
}
