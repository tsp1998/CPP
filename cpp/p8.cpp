#include<iostream>
using namespace std;

void main()
{

swap(&m,&n);
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;

}
