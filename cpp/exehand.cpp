/*using exeption handling*/
#include <iostream>
using namespace std;
int main()
{
  int a, b, z;
  cout << "Enter a and b";
  cin >> a >> b;
  z = a - b;
  try
  {
    if (z != 0)
    {
      cout << "\n Division=" << a / z;
    }
    else
    {
      throw(z);
    }
  }
  catch (int z)
  {
    cout << "\nException cought:divide by zero error";
    cout << "\n value of z" << z;
  }
  return 0;
}
output : Enter a and b10 5

         Division = 2 cse @cse - OptiPlex - 380 : ~$
