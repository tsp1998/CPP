//arithmetic operation using class member function
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
using namespace std;

		class arithmetic
{
	public:
	float a,b;
	float sum(float a,float b)
{
	return a+b;
}
float sub(float a,float b)
{
	return a-b;
}
float prod(float a,float b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}
int mod(float a,float b)
{
	return (int)a%(int)b;
}
		};
		
int main()
{
	arithmetic o;
	cout<<"Enter 2 Numbers";
	cin>>o.a>>o.b;
	cout<<"Sum:"<<o.sum(o.a,o.b)<<endl;
	cout<<"Subtraction:"<<o.sub(o.a,o.b)<<endl;
	cout<<"Product:"<<o.prod(o.a,o.b)<<endl;
	cout<<"Division:"<<o.div(o.a,o.b)<<endl;
	cout<<"Modules(Remainder):"<<o.mod(o.a,o.b);
}
