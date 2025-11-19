# Week 6-7 - Семинар

`Задача 1: Да се напише програма, извеждаща елементите на енда матрица по „серпентина”.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

const int MAX = 100;
void printSerpentineWay1(int a[MAX][MAX], int, int);
void printSerpentineWay2(int a[MAX][MAX], int, int);

int main()
{
	int rows, cols;
	int matrix[MAX][MAX];
	cin >> rows;
	cin >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
	printSerpentineWay1(matrix, rows, cols);
	printSerpentineWay2(matrix, rows, cols);
}
void printSerpentineWay1(int a[MAX][MAX], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << a[i][j] << " ";
			}
		}
		else
		{
			for (int j = cols - 1; j >= 0; j--)
			{
				cout << a[i][j] << " ";
			}
		}
	}
	cout << endl;
}
void printSerpentineWay2(int a[MAX][MAX], int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < rows; j++)
			{
				cout << a[j][i] << " ";
			}
		}
		else
		{
			for (int j = rows - 1; j >= 0; j--)
			{
				cout << a[j][i] << " ";
			}
		}
	}
	cout << endl;
}
```

<hr style="border-width: 5px !important;">

`Задача 2: Да се напише програма, извеждаща на екрана елементите на една матрица по „спирала”.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

const int MAX = 100;
void printSpiral(int matrix[MAX][MAX], int, int);

int main()
{
	int rows, cols;
	int matrix[MAX][MAX];
	cin >> rows >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
	printSpiral(matrix, rows, cols);
}
void printSpiral(int matrix[MAX][MAX], int rows, int cols)
{
	int top = 0;
	int left = 0;

	int bottom = rows - 1;
	int right = cols - 1;

	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)
		{
			cout << matrix[top][i] << " ";
		}

		top++;

		for (int i = top; i <= bottom; i++)
		{
			cout << matrix[i][right] << " ";
		}

		right--;

		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
			{
				cout << matrix[bottom][i] << " ";
			}
			bottom--;
		}
		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
			{
				cout << matrix[i][left] << " ";
			}
			left++;
		}
	}
	cout << endl;
}
```

<hr style="border-width: 5px !important;">

`Задача 2: Да се напише програма, извежда елементите над главния диагонал на една матрица по „серпентина”.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

const int MAX = 100;
void printDiagonalSerpentineWay1(int matrix[MAX][MAX], int, int);
void printDiagonalSerpentineWay2(int matrix[MAX][MAX], int, int);

int main()
{
	int rows, cols;
	int matrix[MAX][MAX];
	cin >> rows >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
	printDiagonalSerpentineWay1(matrix, rows, cols);
	printDiagonalSerpentineWay2(matrix, rows, cols);
}
void printDiagonalSerpentineWay1(int matrix[MAX][MAX], int rows, int cols)
{
	for (int dig = 0; dig <= rows + cols - 2; dig++)
	{
		if (dig % 2 == 0)
		{
			for (int i = 0; i < rows; i++)
			{
				int j = dig - i;
				if (j >= 0 && j < cols && i < j)
				{
					cout << matrix[i][j] << " ";
				}
			}
		}
		else
		{
			for (int i = rows - 1; i >= 0; i--)
			{
				int j = dig - i;
				if (j >= 0 && j < cols && i < j)
				{
					cout << matrix[i][j] << " ";
				}
			}
		}
	}
	cout << endl;
}
void printDiagonalSerpentineWay2(int matrix[MAX][MAX], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i < j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
}
```

<hr style="border-width: 5px !important;">
