# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/README_Exercise6.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица шеста

`Задача 1: Напишете функция, която получава като вход двумерен масив и размерите му и извежда на стандартния изход сумата от елементите на всеки ред на матрицата.`

> [!TIP]
> АЛГОРИТЪМ:
> 
> За всеки ред в матрицата се инициализира sum = 0.
> 
> Обхождат се всички елементи на реда (затова е по колони вторият цикъл) и ги прибавяме към sum.
> 
> След приключване на даден ред извежда сумата на реда.

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

> [!TIP]
> АЛГОРИТЪМ:
> 
> Главен диагонал:
> 
> - Минава през елементите, при които номерът на реда е равен на номера на колоната.
>
> Вторичен диагонал:
>
> - Минава през елементите, при които номерът на колоната се изчислява като от последната колона се извади номера на реда.

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

> [!TIP]
> АЛГОРИТЪМ:
> 
> Функцията обхожда всички редове и всички колони на матрицата:
>
> - Взема всеки елемент на позиция i и j. (ред = i, колона = j).
>
> - Проверява дали i + j = s.
>
>   - Ако е вярно - отпечатва елемента.
>
>   - Ако не е вярно - пропуска елемента.

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

> [!TIP]
> АЛГОРИТЪМ:
> 
> Функцията проверява дали квадратната матрица е магически квадрат.
> 
> 1. Взима сумата на първия ред (обхожда всички колони за ред 0). Тази сума е magicSum.
>    
> 2. Проверка на всеки следващ ред (i = 1). За всеки ред i: Събирт сеа всички елементи по колони. Проверка.
>    
> 3. Проверка на всички колони. За всяка колона j: Събират се всички елементи в редовете за тази колона. Проверка.
>    
> 4. Проверка за главен диагонал: Обхожда елементите, при които ред = колона (arr[i][i]). Проверка.
>    
> 5. Проверка на вторичен диагонал: Обхожда елементите, при които: колона = size − ред − 1. Проверка.

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

> [!TIP]
> АЛГОРИТЪМ:
> 
> Създава се нова матрица transposed. Редовете приемат колоните, а колоните редовете.
>
> Обхождат се всички елементи на оригиналната матрица. Елементът на позиция (ред i, колона j) се присвоява на позиция (ред j, колона i) на транспонираната.
>
> След това програмата отпечатва транспонираната, като обхожда нейните редове (които са COLS), и колоните (които са ROWS).

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

> [!TIP]
> АЛГОРИТЪМ:
> 
> Започва от ред 1 (защото ред нулев няма елементи под диагонала).
>
> За всеки ред i обхожда колоните j, които са под диагонала, тоест j < i и (j < COLS).
>
> Проверява елемента на позиция: (ред i, колона j)
>
> - Ако някой такъв елемент ≠ 0 → матрицата не е триъгълна.
>
> - Ако всички тези елементи са 0 → матрицата е триъгълна.

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
bool isTriangularMatrix(int matrix[ROWS][COLS])
{
    for (int i = 1; i < ROWS; i++)
    {
        for (int j = 0; (j < i && j < COLS); j++)
        {
            if (matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

`Задача 7: Напишете функция, която приема две матрици и размерите им и ги умножава. Направете проверки дали умножението е възможно.`

> [!TIP]
> АЛГОРИТЪМ:
> 
> Проверка за валидност: Матрицата A има размер ROWS1 × COLS1. Матрицата B има размер ROWS2 × COLS2. Умножението е възможно само ако COLS1 == ROWS2.
>
> Всеки елемент от резултата result[i][j] се изчислява като се обхожда редът i на матрица A и колоната j на матрица B. Сумират се произведенията на съответните
> елементи в цикъл по к, който е до колоната на матрица B.

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

`Задача 8: Да се напише програма, която проверява дали квадратна матрица от целочислени числа е симетрична(дали е огледална спрямо главния диагонал). Максималният размер на матрицата е 50х50.`

```cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 50;
bool isSymmetricMatrix(int matrix[MAX_SIZE][MAX_SIZE], int);

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> matrix[i][j];
		}
	}
	if (isSymmetricMatrix(matrix, n))
	{
		cout << "symmetrical." << endl;
	}
	else
	{
		cout << "asymmetrical." << endl;
	}
}

bool isSymmetricMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	bool isSymmetric = true;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				isSymmetric = false;
				break;
			}
		}
		if (!isSymmetric)
		{
			break;
		}
	}
	if (isSymmetric)
	{
		return true;
	}
	else
	{
		return false;
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task8**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task8.cpp)

<hr style="border-width: 5px !important;">

`Задача 9: Да се напише програма, която обръща дадена матрица от целочислени числа огледално (ляво ↔ дясно). Максималният размер на матрицата е 50х50.`

```cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 50;
void mirrorMatrix(int matrix[MAX_SIZE][MAX_SIZE], int, int);
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int, int);
void mySwap(int&, int&);

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    cin >> rows >> cols;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter an number: ";
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    mirrorMatrix(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
}

void mirrorMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols / 2; ++j)
        {
            mySwap(matrix[i][j], matrix[i][cols - j - 1]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void mySwap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task9**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task9.cpp)

<hr style="border-width: 5px !important;">

`Задача 10: Да се напише програма, която обръща дадена матрица огледално от целочислени числа (горе ↔ долу). Максималният размер на матрицата е 50х50.`

```cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 50;
void mirrorMatrix(int matrix[MAX_SIZE][MAX_SIZE], int, int);
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int, int);
void mySwap(int&, int&);

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	int rows, cols;
	cin >> rows >> cols;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter an number: ";
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> matrix[i][j];
		}
	}
	mirrorMatrix(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
}

void mirrorMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows / 2; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			mySwap(matrix[i][j], matrix[rows - i - 1][j]);
		}
	}
}
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task10**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task10.cpp)

<hr style="border-width: 5px !important;">

`Задача 11: Да се напише програма, която завърта квадратна матрица от целочислени числа на 90 градуса по часовниковата стрелка. Максималният размер на матрицата е 50х50.`

```cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 50;
void rotateMatrix90Clockwise(int matrix[MAX_SIZE][MAX_SIZE], int n);
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n);

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    rotateMatrix90Clockwise(matrix, n);
	cout << endl;
	printMatrix(matrix, n);
}

void rotateMatrix90Clockwise(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
    for (int j = 0; j < n / 2; j++)
    {
        int first = j;
        int last = n - j - 1;
        for (int i = first; i < last; i++)
        {
            int move = i - first;
            int top = matrix[first][i];
            matrix[first][i] = matrix[last - move][first];
            matrix[last - move][first] = matrix[last][last - move];
            matrix[last][last - move] = matrix[i][last];
            matrix[i][last] = top; 
        }
    }
}
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task11**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task11.cpp)

<hr style="border-width: 5px !important;">
