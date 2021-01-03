/*mult of num using single inheritance*/
#include<iostream>
using namespace std;
class base
{
public:
int a,b;
void getval(int x,int y);
};
void base::getval(int x,int y)
{
a=x;
b=y;
}
class derived:public base
{
public:
int mult;
void display();
};
void derived::display()
{
mult=a*b;
cout<<"\n.....*****multiplication*****.....="<<mult;
}
int main()
{
derived obj;
obj.getval(100,3);
obj.display();
return 0;
}

output of program=
.....*****multiplication*****.....=300


