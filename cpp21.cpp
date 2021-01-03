//Calculator
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
using namespace std;
int main(){
float no,sum=0,sub=0,prod=0,div=0;
int i; 
    cout<<"enter the number & enter 0 for see result";
cin>>no; 
sum=no;
sub=no; 
prod=no; 
div=no; 
for (i=1;i>=1;i++)
{
	if(i>1)
{
sum=sum+no;
sub=sub - no; 
prod*=no; 
div/=no; 
}
	cout<<"enter next number:";
	cin>>no; 
	if(no==0)
{
cout<<"Sum:"<<sum;
	cout<<"\nSub:"<<sub;
	cout<<"\nproduct:"<<prod ;
	cout<<"\nDivision :"<<div ;
	break; 
	}
}
    return 0;
}