// series factorial of numbers
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
using namespace std;
void factorial(int fnum, int lnum) 
{
	int i,j; 
long long int fac=1;
	for (i=fnum;i<=lnum;i++)
{
	for (j=1;j<=i;j++)
{
	fac=fac*j;
}
cout<<"\nfactorial of "<<i<< " = "<<fac; 
fac=1;
}
}
void main() 
{
int fn,ln;
cout<<("\n\tEnter The first Number: ");
cin>>fn; 
cout<<("\n\tEnter The last Number: ");
cin>>ln; 
factorial(fn,ln);
}