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
