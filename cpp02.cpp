//program to add two numbers
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "enter two numbers";
    cin >> a >> b;
    c = a + b;
    cout << "\nAddition=" << c;
    c = a - b;
    cout << "\nSubtraction=" << c;
    c = a * b;
    cout << "\nMultiplication=" << c;
    c = a / b;
    cout << "\nDivision=" << c;
    c = a % b;
    cout << "\tRemainder=" << c;
    return 0;
}