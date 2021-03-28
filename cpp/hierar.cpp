#include <iostream>
using namespace std;

class employee
{
public:
  char name[10];
  int marks;

  void getresume()
  {
    cout << "\n Enter name of employee=";
    cin >> name;
    cout << "\n Enter marks of employee=";
    cin >> marks;
  }

  void putinfo()
  {
    cout << "\n Name=" << name;
    cout << "\n Marks=" << marks;
  }
};

class accenture : public employee
{
public:
  int salary;
  void getaccenture()
  {
    cout << "\n Enter salary=";
    cin >> salary;
  }

  void putaccenture()
  {
    cout << "\n Salary=" << salary;
  }
};

class infosys : public employee
{
public:
  int salary1;
  void getinfosys()
  {

    cout << "\n Enter salary1=";
    cin >> salary1;
  }

  void putinfosys()
  {

    cout << "\n salary1=" << salary1 << endl;
  }
};

int main()
{
  accenture A;
  infosys I;
  I.getresume();
  I.putinfo();

  A.getaccenture();
  A.putaccenture();

  I.getinfosys();
  I.putinfosys();

  return 0;
}
