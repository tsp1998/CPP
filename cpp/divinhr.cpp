#include <iostream>
using namespace std;
class base
{
public:
  int a, b;
  void getval(int x, int y);
};

void base::getval(int x, int y)
{
  a = x;
  b = y;
}

class derived : public base
{
public:
  int div;
  void display();
};
void derived::display()
{
  div = a / b;
  cout << " Result of division=" << div;
}
int main()
{
  derived obj;
  obj.getval(35, 5);
  obj.display();
  return 0;
}
output : Result of division = 7cse @cse - OptiPlex - 380 : ~ / 50 $ ^ C
