/*virtual function*/
#include<iostream>
using namespace std;
class base
{
public:
int a,b,c;
void get_int(int x,int y)
{
a=x;
b=y;
}
virtual void add()
{
c=a+b;
cout<<"\n Addition of two int values="<<c;
}
};
class derived :public base
{
 public:
 double a,b,c;
 void get_double(int p,int q)
{
 a=p;
 b=q;

 }
 void add()
 c=a+b;
 cout<<"\n addition of two double values"<<c;
}
};
int main()
base obj1;
derived obj;
base = &ptr;
ptr=&obj1;
ptr->get_int(50,70);
ptr->add();
obj2.get-double(11.5,2.9);
ptr=&obj2;
ptr->add();
return 0;
}

