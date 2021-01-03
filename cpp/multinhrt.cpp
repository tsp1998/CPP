/* multiple inheritance*/
#include<iostream>
using namespace std;
class student
{
public:
int rn;
char name[20];
void getdata()
{
cout<<"\n.....enter your roll number.....\n";
cin>>rn;
cout<<"\n.....enter your name.....\n";
cin>>name;
}
void displayinfo()
{
cout<<"\n:::::name:::::"<<name;
cout<<"\n:::::roll no:::::"<<rn;
}
};
class marks
{
public:
int s1,s2,s3,s4,s5;
void getmarks(int a,int b,int c,int d,int e)
{
s1=a;
s2=b;
s3=c;
s4=d;
s5=e;
}
};
class totel:public student,public marks
{
public:
int avg;
void display()
{
avg=(s1+s2+s3+s4+s5)/5;
cout<<"\n*****avg marks of 5 subject*****="<<avg;
}
};
int main()
{
totel obj;
obj.getdata();
obj.getmarks(85,87,88,89,90);
obj.displayinfo();
obj.display();
return 0;
}

output of program=
.....enter your roll number.....
56

.....enter your name.....
poonam

:::::name:::::poonam
:::::roll no:::::56
*****avg marks of 5 subject*****=87



