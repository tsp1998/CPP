//smallest & largest number
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
 float a,b,c,d;
 cout<<"enter number & enter 0.0 to see result:";
cin>>a;
c=a;
for (i=1;i>=1;i++)
{
cout<<"enter next number:";
cin>>b;
d=b;
if (d>c)
{
	c=d;
}
if (d==0.0)
{
	cout<<"largest Number is: "<<c;
}
if (b==0.0)
{
	cout<<"\nsmallest Number is: "<<a;
	break;
}
if (b<a)
{
	a=b;
}
}
}