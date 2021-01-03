///Operater Overloading (Unary)
/*
SAGAR PANDHARE.
ROLL NO:50
SKNSCOE,Korti.
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class number {
private:
int x,y,z;
public:
   void getVal(int a,int b,int c){
      x=a;y=b;z=c;
}

int display(){
cout<<"X:" <<x<<endl;
cout<<"Y:" <<y<<endl;
cout<<"Z:" <<z<<endl;
return 0;
}
  void operator-();
};

   void number::operator-(){
      x=-x;y=-y;z=-z;
}


int main()
{
    number n1;
   //m1.arithmetic();
     n1.getVal(10,20,-30);
     cout<<"Before Operator Overloading"<<endl;
      n1.display();
-n1;
     cout<<"After Operator Overloading"<<endl;
      n1.display();
return 0;
}

/// Output:
/*
Before Operator Overloading
X:10
Y:20
Z:-30
After Operator Overloading
X:-10
Y:-20
Z:30
*/
