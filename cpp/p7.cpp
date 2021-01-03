#include<iostream>
using namespace std;
class singing
{

int std,fee;
public:
int total;
void getdata();
void display();
};
void singing::getdata()
{
cout<<"\n\t enter number of student";
cin>>std;
cout<<"enter fee";
cin>>fee;
total=std*fee;
}
void singing::display()
{
cout<<"singing total="<<total;
}

class dancing
{

int std,fee;
public:
int total;
void getdata();
void display();
};
void dancing::getdata()
{
cout<<"\n\t enter number of student";
cin>>std;
cout<<"enter fee";
cin>>fee;
total=std*fee;
}
void dancing::display()
{
cout<<"dancing total="<<total;
}

class drama
{
int std,fee;
public:
int total;
void getdata();
void display();
};
void drama::getdata()
{
cout<<"\n\t enter number of student";
cin>>std;
cout<<"enter fee";
cin>>fee;
total=std*fee;
}
void drama::display()
{
cout<<"drama total="<<total;
}

int main()
{
class singing s;
class dancing d1;
class drama d2;
s.getdata();
s.display();
d1.getdata();
d1.display();
d2.getdata();
d2.display();
int z;
z=s.total+d1.total+d2.total;
cout<<"grand total="<<z<<endl;
return 0;
}
