//marks AND percentage
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
  cout << "enter marks of subject and enter 0 to see result";
  cin >> s;
  for (i = 1; i >= 1; i++)
  {
    c++;
    sum = sum + s;
    cout << "enter marks of next subject";
    cin >> s;
    if (s == 0)
    {
      cout << "total marks=" << sum;
      sum = sum / c;
      cout << " percentage=" << sum << endl;
    }
  }
}