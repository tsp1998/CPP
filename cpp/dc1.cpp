#include<iostream>
using namespace std;
int count=0;
class alpha
{
public:
alpha()
 {
count++;
cout<<"\n no of object created in constructor="<<count;
 }
~alpha()
 {
cout<<"\n no of object created in destructor="<<count;
count --;
 }
};
int main()
{
alpha obj1,obj2;
 {
cout<<"..........Block1.........."<<endl;
alpha obj3,obj4;
cout<<"..........Block2.........."<<endl;
alpha obj5,obj6;
}
return 0;
}
output:
no of object created in constructor=1
 no of object created in constructor=2..........Block1..........

 no of object created in constructor=3
 no of object created in constructor=4..........Block2..........

 no of object created in constructor=5
 no of object created in constructor=6
 no of object created in destructor=6
 no of object created in destructor=5
 no of object created in destructor=4
 no of object created in destructor=3
 no of object created in destructor=2

