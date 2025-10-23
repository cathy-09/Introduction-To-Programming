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
