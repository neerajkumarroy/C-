#include <iostream>
using namespace std;

int main()
{
	int i = 1 ,num = 1;
	cout<<"Enter the number for which you want to find the table:";
	cin >> num;
	
	for(i = 1;i <= 10; i++)
	{
		int table = i*num;
		cout<<num<<"*"<<i<<"="<<table<<endl;
	}
	return 0;
}

Output:
	____________________________________________________________________________
	Enter the number for which you want to find the table:5
		
	5*1=5
	5*2=10
	5*3=15
	5*4=20
	5*5=25
	5*6=30
	5*7=35
	5*8=40
	5*9=45
	5*10=50
