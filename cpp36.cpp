///Constructor Overloading
/*
SAGAR PANDHARE.
ROLL NO: 50.
SKNSCOE,Korti
date:18-01-2018
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class volume
{
private:
  double i, check;

public:
  volume(double a);
  volume(double a, double b);
  volume(double a, double b, double c);
};

volume::volume(double a)
{
  cout << "volume of cube is : " << a * a * a << endl;
}

volume::volume(double a, double b)
{
  cout << "volume of Cylinder is : " << 3.14 * a * a * b << endl;
}

volume::volume(double a, double b, double c)
{
  cout << "volume of Cylinder is : " << a * c * b << endl;
}

int main()
{
  volume cube(10), cylinder(10, 20), rectangle(10, 20, 30);
  return 0;
}

/// Output:
/*
volume of cube is : 1000
volume of Cylinder is : 6280
volume of Cylinder is : 6000
*/
