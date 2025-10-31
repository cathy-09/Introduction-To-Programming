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

`Задача 2: Напишете функция, която приема цяло число и връща броя на цифрите му.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

int countDigits(int);

int main()
{
	int number = 0;
	cout << "Enter a number: ";
	cin >> number;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	int digitCount = countDigits(number);
	cout << "Number of digits: " << digitCount << endl;
}
int countDigits(int number)
{
	int count = 0;	
	if (number < 0)
	{
		number = -number;
	}
	if (number == 0)
	{
		return 1;
	}
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return count;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%204/Tasks/cppFiles/Task2.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: Напишете функция, която приема три цели числа - a0, q, и n, които се интерпретират като старт, частно и брой числа от геометрична прогресия. Функцията да извежда на стандартния изход първите n числа от геометричната прогресия, определени от a0 и q.`

`Решение:`
```cpp
#include <iostream>
using namespace std;

void geometricProgression(int, int, int);
int main()
{
	int a0 = 0, q = 0, n = 0;
	cout << "Enter a0: ";
	cin >> a0;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	cout << "Enter q: ";
	cin >> q;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	cout << "Enter n: ";
	cin >> n;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	geometricProgression(a0, q, n);
}
void geometricProgression(int a0, int q, int n)
{
	int current = a0;
	for (int i = 0; i < n; ++i)
	{
		cout << current << " ";
		current *= q;
	}
	cout << endl;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%204/Tasks/cppFiles/Task3.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: Напишете функция, която приема цяло неотрицателно число и връща дали е палиндром (дали се чете по същия начин и отпред, и отзад).`

`Решение:`
```cpp
#include <iostream>
using namespace std;
bool isPalindrome(int);

int main()
{
	int number = 0;
	cout << "Enter a number: ";
	cin >> number;
	if (cin.fail() || number < 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a not negative number: ";
	}
	bool result = isPalindrome(number);
	if (result)
	{
		cout << number << " is a palindrome." << endl;
	}
	else
	{
		cout << number << " is not a palindrome." << endl;
	}
}
bool isPalindrome(int number)
{
	int original = number;
	int reversed = 0;
	while (number != 0)
	{
		reversed = reversed * 10 + number % 10;
		number = number / 10;
	}
	return original == reversed;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%204/Tasks/cppFiles/Task4.cpp)

<hr style="border-width: 5px !important;">

`Задача 5: Напишете функция, която приема две цели числа и връща конкатенацията им.`

| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 123 456                                                          | 123456                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;

int concatenate(int, int);
int main()
{
	int num1 = 0, num2 = 0;
	cout << "Enter first number: ";
	cin >> num1;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	cout << "Enter second number: ";
	cin >> num2;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	int result = concatenate(num1, num2);
	cout << "Concatenate: " << result << endl;
}
int concatenate(int num1, int num2)
{
	int temp = num2;
	int multiplier = 1;
	if (num2 == 0)
	{
		multiplier = 10;
	}
	else
	{
		while (temp > 0)
		{
			multiplier = multiplier * 10;
			temp = temp / 10;
		}
	}
	return num1 * multiplier + num2;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%204/Tasks/cppFiles/Task5.cpp)

<hr style="border-width: 5px !important;">

`Задача 6: Напишете функция, която приема цяло число и връща сбора на цифрите му. Използвайте я в програма, която приема цяло число и изчислява сбора на цифрите му, докато се получи едноцифрено число. Пример:`

| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 9517                                                          | 4                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;

int sumOfDigits(int);	

int main()
{
	int number = 0;
	cout << "Enter a number: ";
	cin >> number;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	while (number >= 9)
	{
		number = sumOfDigits(number);
	}
	cout << "Sum of digits: " << number << endl;
}
int sumOfDigits(int number)
{
	int sum = 0;
	if (number < 0)
	{
		number = -number;
	}
	while (number > 0)
	{
		sum = sum + (number % 10);
		number = number / 10;
	}
	return sum;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%206/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

`Задача 5: Напишете функция, която приема две цели числа и връща конкатенацията им.`

| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 123 456                                                          | 123456                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
bool isDivisible(int, int);
int main()
{
	int num1 = 0, num2 = 0;
	cout << "Enter first number: ";
	cin >> num1;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a number: ";
	}
	cout << "Enter second number: ";
	cin >> num2;
	if (cin.fail() || num2 == 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Enter a not zero number: ";
	}
	bool result = isDivisible(num1, num2);
	if (result)
	{
		cout << "It is divisible." << endl;
	}
	else
	{
		cout << "It is not divisible" << endl;
	}
}
bool isDivisible(int num1, int num2)
{
	if (num2 == 0)
	{
		return false;
	}
	int quotient = num1 / num2;
	int product = quotient * num2;
	return product == num1;
}
```


> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task7**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%204/Tasks/cppFiles/Task7.cpp)

<hr style="border-width: 5px !important;">
