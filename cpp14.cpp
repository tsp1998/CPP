//size of variables & data types
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
  int i = 6578;
  short int si = 2;
  float f = 7.88;
  char c = 's';
  double d = 6.4774324788;
  long double ld = 58.5853585225862258;
  cout << "size of integer: " << sizeof(int) << " bytes";
  cout << "\nsize of short integer: " << sizeof(short int) << " bytes";
  cout << "\nsize of float: " << sizeof(float) << " bytes";
  cout << "\nsize of char: " << sizeof(char) << " bytes";
  cout << "\nsize of double: " << sizeof(double) << " bytes";
  cout << "\nsize of long double: " << sizeof(long double) << " bytes";
  cout << "\nsize of i: " << sizeof(i) << " bytes";
  cout << "\nsize of si: " << sizeof(si) << " bytes";
  cout << "\nsize of f: " << sizeof(f) << " bytes";
  cout << "\nsize of c: " << sizeof(c) << " bytes";
  cout << "\nsize of d: " << sizeof(d) << " bytes";
  cout << "\nsize of ld: " << sizeof(ld) << " bytes";
}