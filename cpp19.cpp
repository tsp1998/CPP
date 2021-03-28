//series
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
#include <stdio.h>
void prime(int); //prime number
using namespace std;
int main()
{
    int i, ch, fnum, lnum, n;
    cout << "enter first number :";
    cin >> fnum;
    cout << "enter last number:";
    cin >> lnum;
    cout << "\n1.Ascending Order\n2.Descending Order\n3.Even Numbers\n4.Odd Numbers\n5.prime numbers";
    cout << "\nenter your choice:";
    cin >> ch;
    switch (ch)
    {
    case 1: //ascending order
        for (i = fnum; i <= lnum; i++)
        {
            cout << i << "\t";
        }
        break;
    case 2: //descending order
        for (i = lnum; i >= fnum; i--)
        {
            cout << i << "\t";
        }
        break;
    case 3: // even numbers
        for (i = fnum; i <= lnum; i++)
        {
            if (i % 2 == 0)
            {
                cout << i;
            }
        }
        break;
    case 4: //Odd  numbers
        for (i = fnum; i <= lnum; i++)
        {
            if (i % 2 != 0)
            {
                cout << i;
            }
        }
        break;
    case 5: // prime numbers

        for (i = fnum; i <= lnum; i++)
        {
            if (i != 1)
            {
                prime(i);
            }
        }
        break;
    }
}
void prime(int n) //prime number
{
    int i, c = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        printf("\t%d", n);
    }
}