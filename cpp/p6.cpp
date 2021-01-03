#include<iostream>
using namespace std;
class fruit
{
int qty,price;
char name[20];
public:
void getdata();
void display();
};
int main()
{
fruit obj;
obj.getdata();
obj.display();
return 0;
}
void fruit::getdata()
{
cout<<"\n\t enter name of fruit";
cin>>name;
cout<<"\n\t enter qty";
cin>>qty;
cout<<"\n\t enter price";
cin>>price;
}
void fruit::display()
{
cout<<"\n\t"<<name<<"\n\t"<<qty<<"\n\t"<<price;
}
