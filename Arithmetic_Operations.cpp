#include <iostream>
using namespace std;
int main()
{
	/*C++ program for addition, subtraction, multiplication and division using switch case */
	float a, b, rem;
	int ch, q;

	cout << "Arithmetic Operatios";
	cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Mode";
	cout << "\n\nEnter Your Choice:\n";
	cin >> ch;

	switch (ch)
	{
		case 1:
			{
				cout << "\nEnter Two Value Ie:- Value Of A And B ";
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

			break;

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