#include <iostream>
using namespace std;
class employee
{
public:
  int id;
  char name[25];
  void getinfo()
  {
    cout << "\nEnter name of employee:";
    cin >> name;
    cout << "\nEnter id of employee:";
    cin >> id;
  }
};
class project : public employee
{
public:
  int no;
  void getno()
  {
    cout << "\n Enter no of projects:";
    cin >> no;
  }
  void show()
  {
    cout << "\n no of projects are:" << no;
  }
};
class duration : public project
{
public:
  int time;
  void gettime()
  {
    cout << "\n Enter duration for project completion:";
    cin >> time;
  }
  void display()
  {

    show();
    cout << "\n duration for project completion:" << time;
  }
};
int main()
{
  duration obj;
  obj.getinfo();
  obj.getno();
  obj.gettime();
  obj.display();
  return 0;
}
