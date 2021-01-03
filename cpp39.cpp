///Operater Overloading (Binary)
/*
SAGAR PANDHARE
ROLL NO :50
SKNSCOE,Korti
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class number {
private:
int x;
public:
   void getVal(int a){
      x=a;
}

int display(){
cout<<"X:" <<x<<endl;
return 0;
}
   number operator+(number obj);
};

   number number::operator+(number obj){
number temp;
temp.x=x+obj.x;
return temp;
}


int main()
{
    number n1,n2,n3;
   //m1.arithmetic();
     n1.getVal(10);
      n1.display();
  n2.getVal(20);
      n2.display();
     cout<<"After Binary Operator Overloading"<<endl;
n3=n1+n2; // n3=n1.operater+(obj2);
      n3.display();
return 0;
}

/// Output:
/*
X:10
X:20
After Binary Operator Overloading
X:30
*/
