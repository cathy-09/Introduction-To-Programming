# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/README_Exercise6.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица шеста
`Задача 1: Напишете функция, която получава като вход двумерен масив и размерите му и извежда на стандартния изход сумата от елементите на всеки ред на матрицата.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;
void sumOfRows(int matrix[ROWS][COLS], int, int);

int main()
{
	//{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}
	int matrix[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cin >> matrix[i][j];
		}
	}
	sumOfRows(matrix, ROWS, COLS);
}
void sumOfRows(int matrix[ROWS][COLS], int rows, int cols)
{
	for (int i = 0; i < rows; ++i) {
		int sum = 0;
		for (int j = 0; j < cols; ++j) {
			sum += matrix[i][j];
		}
		cout << "Sum of row " << i << ": " << sum << endl;
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task1.cpp)

<hr style="border-width: 5px !important;">
