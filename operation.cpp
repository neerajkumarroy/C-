#include <iostream>
using namespace std;
int main()
{
	
	float a, b, rem;
	int ch, q;

	cout << "Arithmetic Operatios";
	cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Switch Program";
	cout << "\n\nEnter Your Choice:\n";
	cin >> ch;

	switch (ch)
	{
		case 1:
			{
				cout << "\nEnter Two Value :- Value Of A And B ";
				cin >> a >> b;
				rem = a + b;
				cout << "\n  Result = " << rem;
				cout << "\n";
			}

			break;

		case 2:
			{
				cout << "\nEnter Two Value Ie:- Value Of A And B";
				cin >> a >> b;
				rem = a - b;
				cout << "\n  Result = " << rem;
				cout << "\n";
			}

			break;

		case 3:
			{
				cout << "\nEnter Two Value Ie:- Value Of A And B";
				cin >> a >> b;
				rem = a * b;
				cout << "\n  Result = " << rem;
				cout << "\n";
			}

			break;

		case 4:
			{
				cout << "\nEnter Two Value Ie:- Value Of A And B";
				cin >> a >> b;

				if (a >= b)
				{
					rem = a / b;
					cout << "\n  Result = " << rem;
					cout << "\n";
				}
				else
					cout << "\nt 1st Varable Should Be Greater Than 2nd.  !!!";
				cout << "\n";
			}

			break;S

		case 5:
			{
				cout << "\nEnter Two Value Ie:- Value Of A And B";
				cin >> a >> b;
				if (a >= b)
				{
					q = a / b;
					rem = a - (b *q);
					cout << "\n  Result = " << rem;
					cout << "\n";
				}
				else
					cout << "\nt 1st Varable Should Be Greater Than 2nd.  !!!";
				cout << "\n";
			}

			break;
	}

	return 0;
}

___________________________________________________________________________________________
Output:
___________________________________________________________________________________________
Arithmetic Operatios:
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Switch Program

Enter Your Choice:
2
Enter Two Value :30
20

   Result = 10