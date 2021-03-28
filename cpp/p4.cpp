#include <iostream>
using namespace std;
class employee
{
public:
  int id;
  char name[20];
};
int main()
{
  employee emp[3];
  for (int i = 0; i < 3; i++)
  {
    cout << "\n\t enter your name";
    cin >> emp[i].name;
    cout << "\n\t enter id";
    cin >> emp[i].id;
  }
  for (int i = 0; i < 3; i++)
  {
    cout << "\n\t" << emp[i].name << "\n\t" << emp[i].id << endl;
  }
  return 0;
}
