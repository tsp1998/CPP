// powers of number
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
using namespace std;
void main()
{
	int i, n;
	float a, s = 1;
	cout << ("\n\tEnter The Number: ");
	cin >> a;
	cout << ("\nHow many powers you want: ");
	cin >> n;
	cout << a << "^0=1\n";
	for (i = 1; i <= n; i++)
	{
		s = s * a;
		cout << a << "^" << i << "=" << s << endl;
	}
}