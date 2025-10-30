# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%204/Tasks/README_Exercise3.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица четвърта

`Задача 1: Напишете собствени имплементации на следните стандартни функции: abs(), min(), max(), pow() като използвате съответно имената: myAbs(), myMin(), myMax(), myPow().`

`Решение:`
```cpp
#include <iostream>
using namespace std;

int myAbs(int);
int myMin(int, int);
int myMax(int, int);
double myPow(double, int);

int main()
{
	int myAbsResult = 0, myMinResult = 0, myMaxResult = 0;
	double myPowResult = 0.0;
	int myAbspr = 0, myMin1 = 0, myMin2 = 0, myMax1 = 0, myMax2 = 0, myExp = 0;
	double myPowBase = 0.0;

	cout << "Enter a number for myAbs: ";
	cin >> myAbspr;
	if (cin.fail()) 
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter an number: ";
	}
	myAbsResult = myAbs(myAbspr);
	cout << "myAbs = " << myAbsResult << endl;

	cout << "Enter two numbers for myMin: ";
	cin >> myMin1 >> myMin2;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter an number: ";
	}
	myMinResult = myMin(myMin1, myMin2);
	cout << "myMin = " << myMinResult << endl;

	cout << "Enter two numbers for myMax: ";
	cin >> myMax1 >> myMax2;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter an numbers: ";
	}
	myMaxResult = myMax(myMax1, myMax2);
	cout << "myMax = " << myMaxResult << endl;

	cout << "Enter a base and an number exponent for myPow: ";
	cin >> myPowBase >> myExp;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter an number: ";
	}
	myPowResult = myPow(myPowBase, myExp);
	cout << "myPow = " << myPowResult << endl;
}

int myAbs(int x)
{
	if (x < 0)
	{
		return -x;
	}
	else
	{
		return x;
	}
}

int myMin(int x, int y)
{
	if (x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int myMax(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

double myPow(double base, int exp)
{
	if (exp == 0)
	{
		return 1.0;
	}
	else if (exp > 0)
	{
		double result = 1.0;
		for (int i = 0; i < exp; ++i)
		{
			result = result * base;
		}
		return result;
	}
	else
	{
		double result = 1.0;
		int absExp = myAbs(exp);
		for (int i = 0; i < absExp; ++i)
		{
			result = result * base;
		}
		return 1.0 / result;
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%204/Tasks/cppFiles/Task1.cpp)

<hr style="border-width: 5px !important;">
