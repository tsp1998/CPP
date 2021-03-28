#include <iostream>
using namespace std;
class student
{
public:
   int roll;
   char name[25];
   void getinfo()
   {
      cout << "Enter name of the student:";
      cin >> name;
      cout << "Enter roll no of student:";
      cin >> roll;
   }
   void displayinfo()
   {
      cout << "\n Name:" << name;
      cout << "\n roll no:" << roll;
   }
};
class marks
{
public:
   int s1, s2, s3, s4, s5;
   void getmarks(int a, int b, int c, int d, int e)
   {
      s1 = a;
      s2 = b;
      s3 = c;
      s4 = d;
      s5 = e;
   }
};
class total : public student, public marks
{
public:
   int avg;
   void display()
   {
      avg = (s1 + s2 + s3 + s4 + s5) / 5;
      cout << "\n average of 5 subjects is=" << avg;
   }
};
int main()
{
   total obj;
   obj.getinfo();
   obj.getmarks(87, 85, 80, 85, 87);
   obj.displayinfo();
   obj.display();
   return 0;
}
