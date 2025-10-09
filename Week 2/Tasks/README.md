# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/README_Exercise2.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица втора
`Задача 1: Напишете програма, която въвежда от стандартния вход 3 числа и извежда на стандартния изход най-голямото от тях. Използвайте само два условни оператора.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 5 19 10                                                          | 19                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int theBigest = 0;
	if (a > b && a > c)
	{
		theBigest = a;
	}
	else if (b > a && b > c)
	{
		theBigest = b;
	}
	else
	{
		theBigest = c;
	}
	cout << "" << theBigest << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task1.cpp)
