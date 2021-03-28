#include <iostream>
using namespace std;
class abc
{
public:
  inline void area(int r, float pi = 3.14)
  {
    float a;
    a = pi * r * r;
    cout << a;
  }
};
int main()
{
  abc obj;
  obj.area(10);
  return 0;
}
