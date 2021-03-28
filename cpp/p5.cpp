#include <iostream>
using namespace std;
class addition
{
  int a, b, c;

public:
  void add();
};
int main()
{
  addition obj;
  obj.add();
  return 0;
}
void addition::add()
{
  cout << "\n\t enter two no";
  cin >> a >> b;
  c = a + b;
  cout << "\n\t addition is=" << c << endl;
}
