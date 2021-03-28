//Average of numbers
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
  int i, c = 0;
  float s, sum = 0;
  cout << "enter  number and enter 0 to see result";
  cin >> s;
  for (i = 1; i >= 1; i++)
  {
    c++;
    sum = sum + s;
    cout << "enter  next number";
    cin >> s;
    if (s == 0)
    {
      cout << "Sum is=" << sum << endl;
      sum = sum / c;
      cout << " average is=" << sum;
      break;
    }
  }
}