/*Prime Number*/
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
date:18-01-2018
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class prime
{
private:
  int i, check;

public:
  int primeCheck(int num)
  {
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
        return 0;
    }
    return 1;
  }

  void primeResult(int result)
  {
    if (result == 1)
      cout << "Your Number is Prime" << endl;
    else
      cout << "Your Number is not Prime" << endl;
  }

  void PrimeSeries(int first, int last)
  {
    for (int i1 = first; i1 < last; i1++)
    {
      if (i1 == 1)
        continue;
      check = primeCheck(i1);
      if (check == 1)
        cout << i1 << endl;
    }
  }

  int PrimeSeriesSum(int first, int last)
  {
    int sum = 0;
    for (int i1 = first; i1 < last; i1++)
    {
      if (i1 == 1)
        continue;
      check = primeCheck(i1);
      if (check == 1)
        sum += i1;
    }
    return sum;
  }
};

int main()
{
  int num, result, first, last;
  prime p;
  int ch;

  while (1)
  {
    cout << "\n1.Check Prime Number\n2.Prime Number Series\n3.Prime Number Series Sum\n4.Exit" << endl;
    cout << "Enter your Choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
      cout << "Enter Number:";
      cin >> num;
      result = p.primeCheck(num);
      p.primeResult(result);
      break;
    case 2:
      cout << "Enter Starting Number:";
      cin >> first;
      cout << "Enter End Number:";
      cin >> last;
      p.PrimeSeries(first, last);
      break;
    case 3:
      cout << "Enter Starting Number:";
      cin >> first;
      cout << "Enter End Number:";
      cin >> last;
      result = p.PrimeSeriesSum(first, last);
      cout << "Sum=" << result << endl;
      break;
    case 4:
      exit(0);
    default:
      cout << "Invalid Choice";
    }
  }

  return 0;
}
