# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/README_Exercise3.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица трета
`Задача 1: Напишете програма, която приема от стандартния вход цяло положително число n и извежда на стандартния изход n!`

`Решение 1:`
```cpp
#include <iostream>

int main()
{
	int n, factorial = 1;
	std::cout << "Enter a positive number pls: ";
	std::cin >> n;

	if (n > 0)
	{
		for (int i = 1; i <= n; ++i)
		{
			factorial *= i;
		}
		std::cout << n << "! = " << factorial << std::endl;
	}
	else
	{
		std::cout << "Factorial is not defined. I said enter a positive number pls" << std::endl;
	}
}
```
> [!TIP]
> Не е изрично ясно какво точно трябва да изведе програмата - стойността или "разпадането" на даден факториел. Затова предлагаме и второ решение.

`Решение 2:`
```cpp
#include <iostream>

int main()
{
	int n, factorial = 1;
	std::cout << "Enter a positive number pls: ";
	std::cin >> n;
	if (n > 0)
	{
		std::cout << n << "! = ";
		for (int i = 1; i <= n; ++i)
		{
			if (i == n) 
			{
				std::cout << n << " ";
				break;
			}
			factorial *= i;
			std::cout << i << " * ";
		}
		std::cout << "= " << factorial;
	}
	else
	{
		std::cout << "Factorial is not defined. I said enter a positive number pls" << std::endl;
	}
}
```
> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task1.cpp)

<hr style="border-width: 5px !important;">

`Задача 2: Напишете програма, която приема от стандартния вход цели числа, докато не се въведат три числа, които са кратни на 7. Програмата да изведе на стандартния изход сбора на тези три числа.`
`Решение:`
```cpp
#include <iostream>

int main()
{
	int const TARGET_COUNT = 3;
	int num, sum = 0, count = 0;
	while (count != TARGET_COUNT)
	{
		std::cin >> num;
		if (num % 7 == 0)
		{
			sum = sum + num;
			count++;
		}
	}
	std::cout << "Sum of first 3 num devide by 7: " << sum << std::endl;
}
```
> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task2.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: Напишете програма, която приема от стандартния вход цяло число, което не завършва на 0. Програмата да изведе на стандартния изход огледалното число.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 1234                                                          | 4321                                                           |

`Решение:`
```cpp
#include <iostream>

int main()
{
	short  number, reversed = 0;
	std::cin >> number;
	if (number % 10 == 0)
	{
		std::cout << "The number has zero.";
	}
	else
	{
		while (number != 0)
		{
			reversed = reversed * 10 + number % 10;
			number = number / 10;
		}
		std::cout << "" << reversed << "";
	}
}
```
> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task3.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: Напишете програма, която приема от стандартния вход две цели числа и извежда на стандартния изход всички техни общи делители, сортирани наобратно.`

`Решение:`
```cpp
#include <iostream>

int main()
{
	int firstNum, secondNum;
    std::cout << "Enter first number: ";
    std::cin >> firstNum;
    std::cout << "Enter second number: ";
    std::cin >> secondNum;
    int greatestPossibleDivider = 0;
    if (firstNum < secondNum)
    {
        greatestPossibleDivider = firstNum;
    }
    else
    { 
        greatestPossibleDivider = secondNum;
    }
    for (int i = greatestPossibleDivider; i > 0; i--)
    {
        if (firstNum % i == 0 && secondNum % i == 0)
        {
            std::cout << i << " ";
        }
    }
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task4.cpp)

<hr style="border-width: 5px !important;">
