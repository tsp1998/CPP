/*inheritance*/
#include<iostream>
using namespace std;
class base
{
public:
int a;

void getval(int z)
{
a=z;
 }
};

class derived:public base
{
public:
void display()
{
cout<<"\n value of a="<<a;
 }
};
int main()
{
derived obj;
obj.getval(20);
obj.display();
return 0;
}
/*
output:
value of a=20cse@cse-OptiPlex-380:~/50
*/

