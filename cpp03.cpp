//program to Area, circumference of circle
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
    float r, oprn;
    cout << "enter radius of circle";
    cin >> r;
    oprn = 2 * r;
    cout << "\n Diameter of circle=" << oprn;
    oprn = 2 * 3.14 * r;
    cout << "\n circumference of circle=" << oprn;
    oprn = 3.14 * r * r;
    cout << "\n Area of circle=" << oprn;
    return 0;
}