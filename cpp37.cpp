///Function Overloading
/*
SAGAR PANDHARE.
ROLL NO:50.
Programmer
SKNSCOE,Korti
date:18-01-2018
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class math
{
private:
  int i, check;

public:
  void arithmetic()
  {
    double a, b;
    cout << "Enter Two Numbers;";
    cin >> a >> b;
    cout << "Addition is :" << a + b << endl;
    cout << "Subtraction is :" << a - b << endl;
    cout << "Multiplication is : " << a * b << endl;
    cout << "Division is : " << a / b << endl;
  }

  int arithmetic(int a, int b)
  {
    cout << "Addition is :" << a + b << endl;
    cout << "Subtraction is :" << a - b << endl;
    cout << "Multiplication is : " << a * b << endl;
    cout << "Division is : " << a / b << endl;
    return 0;
  }

  float arithmetic(float a, float b, float c)
  {
    cout << "Addition is :" << a + b + c << endl;
    cout << "Subtraction is :" << a - b - c << endl;
    cout << "Multiplication is : " << a * b * c << endl;
    cout << "Division is : " << a / b / c << endl;
    return 0;
  }
  double arithmetic(double a, double b, double c, double d)
  {
    cout << "Addition is :" << a + b + c + d << endl;
    cout << "Subtraction is :" << a - b - c - d << endl;
    cout << "Multiplication is : " << a * b * c * d << endl;
    cout << "Division is : " << a / b / c / d << endl;
    return 0;
  }
};

int main()
{
  math m1;
  //m1.arithmetic();
  m1.arithmetic(10, 20);
  cout << endl;
  m1.arithmetic(10.20, 20.40, 30.60);
  cout << endl;
  m1.arithmetic(10.20, 20.40, 30.60, 40.80);
  return 0;
}

/// Output:
/*
Addition is :30
Subtraction is :-10
Multiplication is : 200
Division is : 0

Addition is :61.2
Subtraction is :-40.8
Multiplication is : 6367.25
Division is : 0.0163399

Addition is :102
Subtraction is :-81.6
Multiplication is : 259784
Division is : 0.000400487
*/
