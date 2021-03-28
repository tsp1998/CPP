//Check number is positive, negative, even, odd & character is vowel or consonant
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
using namespace std;
void num()
{
      int no;
      cout << "enter your number: ";
      cin >> no;
      if (no > 0)
      {
            cout << "Number is positive: ";
      }
      else
      {
            cout << "\nNumber is negative: ";
      }
      if (no % 2 == 0)
      {
            cout << "\nNumber is even: ";
      }
      if (no % 2 != 0)
      {
            cout << "\nNumber is odd: ";
      }
}
void ch()
{
      char c;
      cout << "enter your Character: ";
      cin >> c;
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
      {
            cout << "Character is Vowel: ";
      }
      else
      {
            cout << "Character is Consonant: ";
      }
}
void main()
{
      int no;
      cout << "1.Check Number \n2. Check Character: ";
      cout << "\nenter your choice: ";
      cin >> no;
      if (no == 1)
      {
            num();
      }
      else
      {
            ch();
      }
}