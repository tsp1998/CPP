#include <iostream>
using namespace std;
class cube
{
public:
  int count;
  cube()
  {
    int *count = new int;
    *count = 7;
    cout << "\nvalue of count=" << *count << endl;
    cout << "\n constructer is called" << endl;
  }
};
int main()
{
  cube obj1;
  cout << "\nthis is main function" << endl;
  return 0;
}
output : value of count = 7

         constructer is called

         this is main function
