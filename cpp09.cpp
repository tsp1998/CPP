//Swapping of two numbers using third variable
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
 float a,b, temp;
 cout<<"enter  first number";
cin>>a;
cout<<"enter second number";
cin>>b;
cout<<"numbers before swapping:\n"<<"a="<<a<<"\tb="<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"numbers before swapping:\n"<<"a="<<a<<"\tb="<<b<<endl;
}