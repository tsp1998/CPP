 #include<iostream>
using namespace std;

class eshopping
{
public:
char name[10];
void get()
{
cout<<"\n Enter name of thing=";
cin>>name;
}

void display()
{
cout<<"\n things="<<name;
}
};

class amezone:public eshopping
{
public:
int size;
void getamezone()
{
cout<<"\n Enter size of thing=";
cin>>size;
}

void putamezone()
{
display();
cout<<"\n size of thing="<<size;
}
};

class flipcart:public eshopping
{
public:
char colour[20];
void getflipcart()
{
cout<<"\n Enter colour of thing=";
cin>>colour;
}

void putflipcart()
{
display();
cout<<"\n Colour of thing="<<colour;
}
};

class snapedeal:public amezone,public flipcart
{
public:
char shape[10];
void getsnapedeal()
{
cout<<"\n Enter shape of thing=";
cin>>shape;
}

void putsnapedeal()
{
putamezone();
putflipcart();

cout<<"\n Shape of thing="<<shape;
}
};

int main()
{
snapedeal S;

S.getamezone();
S.getflipcart();
S.putsnapedeal();

return 0;
}


