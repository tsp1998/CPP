/*operating overloading using unary operator*/
#include <iostream>
using namespace std;
class num
{
public:
  int a, b, c;
  void getval(int x, int y, int z)
  {
    a = x;
    b = y;
    c = z;
  }
  void display()
  {
    cout << "value of a=" << a;
    cout << "value of b=" << b;
    cout << "value of c=" << c;
  }
  void operator-();
};
void num::operator-()
{
  a = -a;
  b = -b;
  c = -c;
}
int main()
{
  num obj;
  obj.getval(20, -30, 40);
  obj.display();
  -obj;
  cout << "\n**************overloading operator***********" << endl;
  obj.display();
  return 0;
}
a = -a;
b = -b;
c = -c;
