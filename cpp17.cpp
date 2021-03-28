//Check Wheather Your get First Class,Second Class ,Distinction or Fail
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
using namespace std;
void main()
{
  int m;
  cout << "\n\tEnter your Marks=";
  cin >> m;
  if (m >= 70 && m <= 100)
  {
    cout << ("\n\tYou Get Distinction");
  }
  if (m >= 60 && m < 70)
  {
    cout << ("\n\tYou Get First Class");
  }
  if (m >= 40 && m < 60)
  {
    cout << ("\n\tYou Get Second Class");
  }
  if (m >= 0 && m < 40)
  {
    cout << ("\n\tYou are Fail");
  }
}