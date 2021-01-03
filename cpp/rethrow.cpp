#include<iostream>
using namespace std;
void divide(int a,int b)
{
int y;
y=a-b;
try
{
if(y!=0)
{
cout<<"\n\t division="<<a/y;
}
else
{
throw y;
}
}
catch(int y)
{
throw;
}
}
int main()
{
try
{
divide(10,10);
}
catch(int y)
{
cout<<"\n\t exeption caught";
cout<<"\n\t divide by zero error"<<endl;
}
return 0;
}
output;
 exeption caught
	 divide by zero error

