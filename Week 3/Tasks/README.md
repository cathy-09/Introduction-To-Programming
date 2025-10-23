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

`Задача 5: Напишете програма, която приема от стандартния вход цяло положително число n (n <= 20), и после n числа. Програмата да изведе на стандартния изход най-голямото и най-малкото от въведените числа.`

`Решение:`
```cpp
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int number;
	int min = 0;
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		if (n > 20)
		{
			std::cout << "Ops... Check your assignment!!!" << std::endl;
			return 0;
		}
		std::cin >> number;
		if (i == 0)
		{
			max = number;
			min = number;
		}
		if (number > max)
		{
			max = number;
		}
		if (number < min)
		{
			min = number;
		}
	}
	std::cout << "Max: " << max << std::endl;
	std::cout << "Min: " << min << std::endl;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task5.cpp)

<hr style="border-width: 5px !important;">

`Задача 6: Напишете програма, която приема от стандартния вход цяло положително число n и извежда на стандартния изход n-тото число на Фибоначи. Приемаме, че първите 2 числа на Фибоначи са единици.`

`Решение:`
```cpp
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n <= 0)
	{
		std::cout << "Ops... You are stupid! n must be A positive number.";
	}
	else if (n == 1)
	{
		std::cout << 1 << " ";
	}
	else if (n == 2)
	{
		std::cout << 1 << " ";
	}
	else
	{
		long first = 0, second = 1, next = 0;
		for (int i = 2; i <= n; i++)
		{
			next = first + second;
			first = second;
			second = next;			
		}
		std::cout << "Fibbonacci: " << next << " ";
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

`Задача 7: Напишете програма, която приема от стандартния вход цяло число и извежда на стандартния изход дали то е просто.`

`Решение:`
```cpp
#include <iostream>

int main() 
{
	int num, countDivider = 0;
	std::cout << "Enter a num: ";
	std::cin >> num;
	if (num <= 1)
	{
		std::cout << "Num is not prime" << std::endl;
	}
	else
	{
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				countDivider++;
			}
		}
		if (countDivider == 2)
		{
			std::cout << "Congratulations. Num is prime." << std::endl;
		}
		else
		{
			std::cout << "Num is not prime" << std::endl;
		}
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task7**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task7.cpp)

<hr style="border-width: 5px !important;">

`Задача 8: Напишете програма, която приема от стандартния вход цяло число и извежда на стандартния изход броя на цифрите му.`

`Решение:`
```cpp
#include <iostream>
int main()
{
	int  number, temp = 0, counter = 0;;
	std::cin >> number;
	while (number != 0)
	{
		temp = temp * 10 + number % 10;
		number = number / 10;
		counter++;
	}
	std::cout << "Count: " << counter << std::endl;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task8**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task8.cpp)

<hr style="border-width: 5px !important;">

`Задача 9: Напишете програма, която въвежда от стандартния вход две цели положителни числа m – брой редове и n. На нечетен номер на ред се печатат n тиренца, а на четен n звездички, заградени от симола ‘|’ в началото и края на всеки ред.`

| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 4 6                                                          | виж картинката                                                           |

```
|------|
|******|
|------|
|******|
```

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task8**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFiles/Task8.cpp)

<hr style="border-width: 5px !important;">

