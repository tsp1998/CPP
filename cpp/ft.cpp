#include<iostream>
using namespace std;
template <class T>
void swap1(T &x,T &y)
  {
  T temp;
  temp=x;
   x=y;
   y=temp;
  }
void swap2(int a,int b,double x, double y)
 {
  cout<<"\n int values before swapping"<<endl; 
  cout<<"a="<<a<<"b="<<b;
  swap(a,b);
  cout<<"\n int values after swapping"<<endl;
  cout<<"a="<<a<<"b="<<b;
  cout<<"\n..................................";
  cout<<"\n double values before swapping"<<endl;
  cout<<"x="<<x<<"y="<<y;
  swap(x,y);
  cout<<"\n double values after swapping"<<endl;
  cout<<"x="<<x<<"y="<<y;
  }
 int main()
 {
 swap2(10,20,11.22,22.33);
  return 0;
}

output:
int values before swapping
a=10b=20
 int values after swapping
a=20b=10
..................................
 double values before swapping
x=11.22y=22.33
 double values after swapping
x=22.33y=11.22
