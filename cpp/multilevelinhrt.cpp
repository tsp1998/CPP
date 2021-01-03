/*multilevel inheritance*/
#include<iostream>
using namespace std;
class emp
{
public:
char name[20];
int id;
void getinfo()
{
cout<<"\n.....enter name.....\n";
cin>>name;
cout<<"\n.....enter id.....\n";
cin>>id;
}
void showinfo()
{
cout<<"\n.....emp name.....=\n"<<name;
cout<<"\n.....emp id.....=\n"<<id;
}
};
class project:public emp
{
public:
int num;
void get()
{
cout<<"\n.....enter number of project.....\n";
cin>>num;
}
void show()
{
cout<<"\n..... number of project.....=\n"<<num;
}
};
class duration:public project
{
public:
int time;
void get_time()
{
cout<<"\n..... enter duration for project complition.....\n";
cin>>time;
}
void display()
{
showinfo();
show();
cout<<"\n .....duration for project complition=.....\n"<<time<<"month";
}
};
int main()
{
duration obj;
obj.getinfo();
obj.get();
obj.get_time();
obj.display();
return 0;
}

output of program=
.....enter name.....
Anu

.....enter id.....
9270710072

.....enter number of project.....
5
..... enter duration for project complition.....
2
.....emp name.....=
Anu
.....emp id.....=
9270710072
..... number of project.....=
5
 .....duration for project complition=.....
2month

