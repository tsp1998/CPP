//Records using structure
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <iostream>
#include <string.h>
using namespace std;
int i, count = 0;
class get
{
protected
	int length[10];
protected
	char str[100];
public
	char get(char str[100])
	{
		char strtemp[30];

		for (i = 0; i < 100; i++)
		{
			str[i] = '\0';
		}
		cout << "Enter Name";
		gets(strtemp);
		count++;
		strcat(str, strtemp);
		length[0] = strlen(str);
		for (i = 1; i >= 1; i++)
		{
			cout << "Enter Next Name";
			gets(strtemp);
			count++;
		}
	}
};
int main()
{
	get get1;
	get1.get();
}
