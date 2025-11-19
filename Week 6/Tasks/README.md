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

`Задача 2: Напишете функция, която получава като вход квадратна матрица и размерите ѝ и извежда на стандартния изход елементите първо на главния и после на второстепенния диагонал.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

const int ROWSTASK2 = 4;
const int COLSTASK2 = 4;
void printDiagonals(int matrix[ROWSTASK2][COLSTASK2], int, int);

int main()
{
	//{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}
	int matrixTask2[ROWSTASK2][COLSTASK2];
	for (int i = 0; i < ROWSTASK2; i++)
	{
		for (int j = 0; j < COLSTASK2; j++)
		{
			cin >> matrixTask2[i][j];
		}
	}
	printDiagonals(matrixTask2, ROWSTASK2, COLSTASK2);
}

void printDiagonals(int matrix[ROWSTASK2][COLSTASK2], int rows, int cols)
{
	cout << "Main diagonal: ";
	for (int i = 0; i < rows; ++i) {
		cout << matrix[i][i] << " ";
	}
	cout << endl;
	cout << "Second diagonal: ";
	for (int i = 0; i < rows; ++i) {
		cout << matrix[i][cols - i - 1] << " ";
	}
	cout << endl;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task2.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: Напишете функция, която получава като вход матрица и размерите ѝ и цяло неотрицателно число s. Програмата да извежда на станартния изход елементите от матрицата, за които сборът от индексите му са равни на s.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;
void printElementsWithSumS(int matrix[ROWS][COLS], int, int, int);

int main()
{
	//{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
	int matrixTask3[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cin >> matrixTask3[i][j];
		}
	}
	int s;
	cin >> s;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter an number: ";
	}
	printElementsWithSumS(matrixTask3, ROWS, COLS, s);
}

void printElementsWithSumS(int matrix[ROWS][COLS], int rows, int cols, int s)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
			{
				if (i + j == s)
				{
					cout << matrix[i][j] << " ";
				}
			}
	}
	cout << endl;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task3.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: Една квадратна матрица от числа се нарича магически квадрат, когато всички суми, получени поотделно от сбора на елементите по всеки ред/всеки стълб/всеки от двата диагонала са равни. Напишете функция, която приема квадратна матрица и размерите ѝ и определя дали образува магически квадрат.`

```cpp
#include <iostream>
using namespace std;

const int ROWSTASK4 = 3;
const int COLSTASK4 = 3;
bool isMagicSquare(int matrix[ROWSTASK4][COLSTASK4], int);

int main()
{
	//{1, 2, 3},{5, 6, 7},{9, 10, 11}
	int matrixTask4[ROWSTASK4][COLSTASK4];
	for (int i = 0; i < ROWSTASK4; i++)
	{
		for (int j = 0; j < COLSTASK4; j++)
		{
			cin >> matrixTask4[i][j];
		}
	}
	if (isMagicSquare)
	{
		cout << "MAGIC!";
	}
	else
	{
		cout << "Not magic!";
	}
}

bool isMagicSquare(int matrix[ROWSTASK4][COLSTASK4], int size)
{
	int magicSum = 0;
	for (int j = 0; j < size; ++j)
	{
		magicSum += matrix[0][j];
	}

	for (int i = 1; i < size; ++i)
	{
		int rowSum = 0;
		for (int j = 0; j < size; ++j)
		{
			rowSum += matrix[i][j];
		}
		if (rowSum != magicSum)
		{
			return false;
		}
	}

	for (int j = 0; j < size; ++j)
	{
		int colSum = 0;
		for (int i = 0; i < size; ++i)
		{
			colSum += matrix[i][j];
		}
		if (colSum != magicSum)
		{
			return false;
		}
	}

	int mainDiagSum = 0;
	for (int i = 0; i < size; ++i)
	{
		mainDiagSum += matrix[i][i];
	}
	if (mainDiagSum != magicSum)
	{
		return false;
	}

	int secDiagSum = 0;
	for (int i = 0; i < size; ++i)
	{
		secDiagSum += matrix[i][size - i - 1];
	}
	if (secDiagSum != magicSum)
	{
		return false;
	}
	return true;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task4.cpp)

<hr style="border-width: 5px !important;">

`Задача 5: Напишете функция, която приема матрица и размерите ѝ и я транспонира.`

```cpp
#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;
void transposeMatrix(int matrix[ROWS][COLS]);

int main()
{
    //{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12};
    int matrix[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
			cin >> matrix[i][j];
        }
    }
	transposeMatrix(matrix);
}

void transposeMatrix(int matrix[ROWS][COLS])
{
    int transposed[COLS][ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task5.cpp)

<hr style="border-width: 5px !important;">

`Задача 6: Нашишете функция, която приема матрица и размерите ѝ и проверява дали е триъгълна, тоест дали всички елементи под главния ѝ диагонал са нули.`

```cpp
#include <iostream>
using namespace std;

const int ROWSTASK6 = 4;
const int COLSTASK6 = 4;
bool isTriangularMatrix(int matrix[ROWSTASK6][COLSTASK6]);

int main()
{
    //{1, 2, 3, 4}, {0, 6, 7, 8}, {0, 0, 11, 12}, {0, 0, 0, 12};
    int matrixTask6[ROWSTASK6][COLSTASK6];

    for (int i = 0; i < ROWSTASK6; i++)
    {
        for (int j = 0; j < COLSTASK6; j++)
        {
            cin >> matrixTask6[i][j];
        }
        cout << endl;
    }

    if (isTriangularMatrix(matrixTask6))
    {
        cout << "The matrix is triangular." << endl;
    }
    else
    {
        cout << "The matrix is not triangular." << endl;
    }
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

```cpp
#include <iostream>
using namespace std;

const int ROWS1 = 2;
const int COLS1 = 2;

const int ROWS2 = 2;
const int COLS2 = 3;

bool multiplyMatrices(int matrixA[ROWS1][COLS1], int matrixB[ROWS2][COLS2], int result[ROWS1][COLS2]);

int main()
{
    //{1, 2, 3, 4}, {0, 6, 7, 8}, {0, 0, 11, 12}, {0, 0, 0, 12};
    int matrixTask7A[ROWS1][COLS1];
	int matrixTask7B[ROWS2][COLS2];
	int resultMatrixTask7[ROWS1][COLS2];
    for (int i = 0; i < ROWS1; i++)
    {
        for (int j = 0; j < COLS1; j++)
        {
            cin >> matrixTask7A[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < ROWS2; i++)
    {
        for (int j = 0; j < COLS2; j++)
        {
            cin >> matrixTask7B[i][j];
        }
        cout << endl;
    }
    if (multiplyMatrices(matrixTask7A, matrixTask7B, resultMatrixTask7))
    {
        for (int i = 0; i < ROWS1; i++)
        {
            for (int j = 0; j < COLS2; j++)
            {
                cout << resultMatrixTask7[i][j] << " ";
            }
            cout << endl;
        }
	}
}

bool multiplyMatrices(int matrixA[ROWS1][COLS1], int matrixB[ROWS2][COLS2], int result[ROWS1][COLS2])
{
    if (COLS1 != ROWS2)
    {
        cout << "Not possible." << endl;
        return false;
    }
    for (int i = 0; i < ROWS1; i++)
    {
        for (int j = 0; j < COLS2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return true;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task7**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task7.cpp)

<hr style="border-width: 5px !important;">
