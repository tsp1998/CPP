/*single inheritance*/
#include<iostream>
using namespace std;
class base
{
public:
int a;
void getval(int x)
{
a=x;
}
};
class derived:public base
{
public:
void display()
{
cout<<"\n..............value of a...........="<<a;
}
};
int main()
{
derived obj;
obj.getval(10);
obj.display();
return 0;
}

*output of program*=
..............value of a...........=10
