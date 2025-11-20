# Решения на допълнителните задачи

## Допълнителни задачи от седмица шест

`Задача 1: По дадено n между 1 и 20 да се намери дали произведението от две матрици е магически квадрат. Въведете на конзолата две квадратни матрици N×N и намерете тяхното произведение. За намереното произведение намерете дали е магически квадрат т.е. сборът от елементите от всеки ред, всяка колона, диагонала и вторичния такъв да е равен. Има дадена функ bool isMagicSquare(const int ....) . Ако е вярно да отпечата is magic square ако не е да отпечата is not a magic square.`

```cpp
#include <iostream>

const int MAX_SIZE = 20;
const int MIN_SIZE = 1;
bool isValidSize(int, int);
void enterMatrix(int matrix[MAX_SIZE][MAX_SIZE], int);
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int);
void MulpitlyMatrix(int matrixA[MAX_SIZE][MAX_SIZE],
	int matrixB[MAX_SIZE][MAX_SIZE],
	int resultMatrix[MAX_SIZE][MAX_SIZE], int);
bool isMagicSquare(int resultMatrix[MAX_SIZE][MAX_SIZE], int);

int main()
{
	int n = 0;
	std::cin >> n;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input" << std::endl;
	}
	if (!isValidSize(n, n))
	{
		std::cout << "Invalid size.";
		return 1;
	}
	int matrixA[MAX_SIZE][MAX_SIZE];
	int matrixB[MAX_SIZE][MAX_SIZE];
	int resultMatrix[MAX_SIZE][MAX_SIZE];
	enterMatrix(matrixA, n);
	enterMatrix(matrixB, n);
	MulpitlyMatrix(matrixA, matrixB, resultMatrix, n);
	if (isMagicSquare(resultMatrix, n))
	{
		std::cout << "It's a magic square.";
	}
	else
	{
		std::cout << "It's not a magic square.";
	}
}
bool isValidSize(int rows, int cols)
{
	return (rows >= MIN_SIZE &&
		rows <= MAX_SIZE &&
		cols >= MIN_SIZE &&
		cols <= MAX_SIZE);
}
void enterMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void MulpitlyMatrix(int matrixA[MAX_SIZE][MAX_SIZE],
	int matrixB[MAX_SIZE][MAX_SIZE],
	int resultMatrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			resultMatrix[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				resultMatrix[i][j] = resultMatrix[i][j] + (matrixA[i][k] * matrixB[k][j]);
			}
		}
	}
	printMatrix(resultMatrix, n);
}
bool isMagicSquare(int resultMatrix[MAX_SIZE][MAX_SIZE], int n)
{
	int magicSum = 0;

	for (int j = 0; j < n; j++)
	{
		magicSum = magicSum + resultMatrix[0][j];
	}

	for (int i = 1; i < n; i++)
	{
		int rowSum = 0;
		for (int j = 0; j < n; j++)
		{
			rowSum = rowSum + resultMatrix[i][j];
		}
		if (magicSum != rowSum)
		{
			return false;
		}
	}

	for (int j = 0; j < n; j++)
	{
		int colSum = 0;
		for (int i = 0; i < n; i++)
		{
			colSum = colSum + resultMatrix[i][j];
		}
		if (magicSum != colSum)
		{
			return false;
		}
	}

	for (int j = 0; j < n; j++)
	{
		int colSum = 0;
		for (int i = 0; i < n; i++)
		{
			colSum = colSum + resultMatrix[i][j];
		}
		if (magicSum != colSum)
		{
			return false;
		}
	}

	int mainDig = 0;
	for (int i = 0; i < n; i++)
	{
		mainDig = mainDig + resultMatrix[i][i];
	}
	if (magicSum != mainDig)
	{
		return false;
	}

	int secondaryDig = 0;
	for (int i = 0; i < n; i++)
	{
		secondaryDig = secondaryDig + resultMatrix[i][n - i - 1];
	}
	if (magicSum != secondaryDig)
	{
		return false;
	}

	return true;
}
```
