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
> В `ASCII` таблицата разликата между малка и голяма буква е точно `32`.
> 
> Например: `'a' = 97`, `'A' = 65`.

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
> **Изрично преобразуване:** Преобразуванията се извършват само когато са изрично посочени от програмиста

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task3.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: Напишете програма, която приема от стандартния вход 4 числа. Тези числа представляват две точки в (x, y) координати. Тези две точки са горният ляв и долният десен ъгъл на правоъгълник, ориентиран успоредно на координатните оси. Програмата после приема и (x, y) координатите на друга точка (2 числа). Изведете на стандартния изход дали точката се намира вътре в правоъгълника, върху очертанията му, или извън него.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 2 10 1 6 3 5                                                          | Inside                                                           |
| 2 10 1 6 2 8                                                          | On the border                                                           |
| 2 10 1 6 7 11                                                          | Outside                                                           |

> [!CAUTION]
> **Вход 1** би трябвало да бъде Outside според мен, защото:
>
> x трябва да е в интервала `[1,2]`, а y трябва да е в интервала `[6,10]`.
> 
> Но `x = 3 > 2`, което би означавало, че точката е **извън** правоъгълника.

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	double x1, y1, x2, y2, x, y;
	cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
	if (x > x1
		&& x < x2
		&& y > y1
		&& y < y2)
	{
		cout << "Inside";
	}
	else if ((x == x1 || x == x2)
		&& (y <= y1 && y >= y2)
		|| (y == y1 || y == y2)
		&& (x >= x1 && x <= x2))
	{
		cout << "On the border";
	}
	else
	{
		cout << "Outside";
	}
}
```

> [!TIP]
> **Inside:** Ако е изпълнено следното неравенство => `x1 < x < x2` и `y1 < y < y2`.
>
> **On the border:** Ако `x` или `y` координатите съвпадат с някоя от границите, то тогава е върху границите на правоъгълника.
>
> **Outside:** `else`.

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task4.cpp)

<hr style="border-width: 5px !important;">

`Задача 5: Напишете програма, която от стандартния вход получава число r, което се интерпретира като радиуса на окръжност с център (0, 0) в координатна система, и точка с (x, y) координати. Програмата да извежда на стандартния изход дали точката се намира вътре в окръжността, извън нея, или по очертанията ѝ.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 10 2 2                                                          | Inside                                                           |
| 10 0 10                                                          | On the border                                                           |
| 10 20 20                                                          | Outside                                                           |

`Решение:`
```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double epsilon = 0.0002;
	double r, x, y;
	cin >> r >> x >> y;
	double distance = sqrt(pow(x, 2) + pow(y, 2));
	if (fabs(distance - r) < epsilon)
	{
		cout << "On the border";
	}
	else if (distance < r)
	{
		cout << "Inside";
	}
	else
	{
		cout << "Outside";
	}
}
```

> [!TIP]
> **Inside:** Ако е изпълнено `distance < r`.
>
> **On the border:** `d == r`
>
> **Outside:** `d > r`.

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task5.cpp)

<hr style="border-width: 5px !important;">
