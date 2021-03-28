#include <iostream>
using namespace std;

class number
{
public:
  int i;
  void get(int a)
  {
    i = a;
  }
  void show()
  {
    cout << "value of i=" << i;
  }
  number operator+(number obj);
};
number number::operator+(number obj)
{
  number temp;
  temp.i = i + obj.i;
  return temp;
}
int main()
{
  number obj1, obj2, obj3;
  obj1.get(10);
  obj1.show();
  obj2.get(20);
  obj2.show();
  obj3 = obj1 + obj2;
  cout << "\n.....Addition.... " << endl;
  obj3.show();
  return 0;
}
