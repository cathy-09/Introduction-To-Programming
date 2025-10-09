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

<hr style="border-width: 5px !important;">

`Задача 2: Напишете програма, която въвежда от стандартния вход 1 символ. Изолзвайки тернарен оператор, установете дали въведения символ е малка латинска буква.`

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main() 
{
	char sybol;
	cin >> sybol;
	cout << "" << ((sybol >= 'a' && sybol <= 'z') ? true : false) << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task2.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: Напишете програма, която приема от стандартния вход 1 символ. Ако той е малка буква, извежда съответната голяма, а ако е голяма буква, извежда съответната малка, а ако не е буква, да изведе съобщение за невалиден символ.`

> [!TIP]
> В ASCII таблицата разликата между малка и голяма буква е точно 32.
> 
> Например: 'a' = 97, 'A' = 65.

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main() 
{
	char sybol;
	cin >> sybol;
	if (sybol >= 'a' && sybol <= 'z')
	{
		cout << "" << (char)(sybol - 'a' + 'A') << "";
	}
	else if (sybol >= 'a' && sybol <= 'z')
	{
		cout << "" << (char)(sybol - 'A' + 'a') << "";
	}
	else
	{
		cout << "Invalid!";
	}
}
```
> [!IMPORTANT]
> `(char)...`
> 
> Изрично преобразуване: Преобразуванията се извършват само когато са изрично посочени от програмиста

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task3.cpp)
