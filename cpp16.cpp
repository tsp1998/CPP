//Calculator
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
using namespace std;
int main()
{
	int i, divn, rem;
	float a, sum, sub, prod, div;
	cout << "enter 0.0 for addition & subtraction\n enter 1.0 for multiplication & division\nenter number:";
	cin >> a;
	sum = a;
	sub = a;
	prod = a;
	div = a;
	divn = ((int)a);
	rem = ((int)a);
	for (i = 1; i >= 1; i++)
	{
		cout << "enter next number:";
		cin >> a;
		sum += a;
		sub -= a;
		prod *= a;
		div /= a;
		divn /= ((int)a);
		rem = rem % ((int)a);
		if (a == 0.0)
		{
			cout << "addition: " << sum;
			cout << "Subtraction: " << sub;
			break;
		}
		if (a == 1.0)
		{
			cout << "Multiplication: " << prod;
			cout << "\ndivision: " << div;
			printf("\n(division: %d & remainder: %d"), divn, rem;
			break;
		}
	}
}