/*implementation of classes and object*/
#include<iostream>
using namespace std;
class student

{
public:
int roll;
char name[20];
};
int main()
{
student obj;
cout<<"\n\t enter your name";
cin>>obj.name;
cout<<"\n\t enter your roll no";
cin>>obj.roll;
cout<<"my name is"<<obj. name;
cout<<"my roll no is="<<obj.roll;
return 0;
}

