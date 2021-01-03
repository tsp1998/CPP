#include<iostream>
using namespace std;
class books
{
public:
int pages;
char name[20];
float price;
};
int main()
{
books b1,b2,b3;
cout<<"\n\t enter name of book";
cin>>b1.name>>b2.name>>b3.name;
cout<<"\n\t enter price of book";
cin>>b1.price>>b2.price>>b3.price;
cout<<"\n\t enter pages of book";
cin>>b1.pages>>b2.pages>>b3.pages;
cout<<"\n name \t price \t pages";
cout<<"\n"<<b1.name<<"\t"<<b1.price<<"\t"<<b1.pages;
cout<<"\n"<<b2.name<<"\t"<<b2.price<<"\t"<<b2.pages;
cout<<"\n"<<b3.name<<"\t"<<b3.price<<"\t"<<b3.pages<<endl;
return 0;
}
