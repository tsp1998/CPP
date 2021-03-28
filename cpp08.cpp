//Find interest
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>

using namespace std;
int main()
{
  float p, r, t, i;
  cout << "enter principal";
  cin >> p;
  cout << "enter  rate";
  cin >> r;
  cout << "enter  time";
  cin >> t;
  i = p * r * t / 100;
  cout << " interest is=" << i;
}