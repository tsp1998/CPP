// strings concat
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void main()
{
	char str1[10], str2[10], str3[10];
	cout << ("\n\tEnter The name: ");
	gets(str1);
	cout << ("\n\tEnter The next name: ");
	gets(str3);
	cout << ("\n\tName entered is: ");
	puts(str1);
	strcpy(str2, str1);
	cout << ("\n\tName copied is: ");
	puts(str2);
	int length = strlen(str1);
	cout << ("\n\tLength of Name: ") << length;
	strcat(str1, str3);
	cout << ("\n\tcombined Name  is: ");
	puts(str1);
}