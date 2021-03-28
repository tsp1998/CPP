//largest Number
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
	int i;
	float a, b;
	cout << "enter number & enter 0 to see result:";
	cin >> a;
	for (i = 1; i >= 1; i++)
	{
		cout << "enter next number:";
		cin >> b;
		if (b > a)
		{
			a = b;
		}
		if (b = 0)
		{
			cout << "Largest Number is: " << a;
			break;
		}
	}
}