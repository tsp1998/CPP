//matrix arithmetic
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
	int ch, n, j, i, row, col;
	float mat1[5][5], sum[5][5], sub[5][5], prod[5][5], div[5][5];
	cout << "enter row size:";
	cin >> row;
	cout << "enter column size:";
	cin >> col;
	cout << "enter first matrix:\n";
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << "enter element [" << i + 1 << "][" << j + 1 << "]:";
			cin >> sum[i][j];
			sub[i][j] = sum[i][j];
			prod[i][j] = sum[i][j];
			div[i][j] = sum[i][j];
		}
	}
	cout << "enter second matrix:\n";
	for (int n = 1; n >= 1; n++)
	{
		if (n > 1)
		{
			cout << "1.enter next matrix:\n0.result\n";
			cout << "\nenter your choice:";
			cin >> ch;
			if (ch == 0)
			{
				cout << "Addition:\n";
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						cout << sum[i][j];
						cout << "\t";
					}
					cout << "\n";
				}
				cout << "Subtraction:\n";
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						cout << sub[i][j];
						cout << "\t";
					}
					cout << "\n";
				}
				cout << "Multiplication:\n";
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						cout << prod[i][j];
						cout << "\t";
					}
					cout << "\n";
				}
				cout << "Division :\n";
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						cout << div[i][j];
						cout << "\t";
					}
					cout << "\n";
				}
			}
		}
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				cout << "enter element [" << i + 1 << "][" << j + 1 << "]:";
				cin >> mat1[i][j];
				sum[i][j] = sum[i][j] + mat1[i][j];
				sub[i][j] -= mat1[i][j];
				prod[i][j] *= mat1[i][j];
				div[i][j] /= mat1[i][j];
			}
		}
	}
	return 0;
}