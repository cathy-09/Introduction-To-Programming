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
> **On the border:** Ако е изпълнено `distance == r`
>
> **Outside:** Ако е изпълнено `distance > r`.

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task5.cpp)

<hr style="border-width: 5px !important;">

`Задача 6: Напишете програма, която получава от стандартния вход число - година. Програмата да изведе на стандартния изход дали годината е високосна.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 2000                                                          | Leap                                                           |
| 1900                                                          | Not Leap                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	int year;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		cout << "Leap";
	}
	else
	{
		cout << "Not Leap";
	}
}
```

> [!TIP]
> **Упътване:** Една година е високосна, ако се дели на 4 и не се дели на 100 или ако се дели на 400..

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

`Задача 7: Напишете програма, която приема от стандартния вход цяло число - температурата градуси в Целзий. Програмата да извежда на стандартния изход температурната категория, следвайки следната скала: Много горещо (т.е. >= 35°C); Горещо (т.е. >= 25°C и < 35°C); Топло (т.е. >= 15°C и < 25°C); Хладно (т.е. >= 5°C и < 15°C); Студено (т.е. < 5°C).`

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	int temperature;
	cin >> temperature;
	if (temperature >= 35)
	{
		cout << "Too hot!";
	}
	else if (temperature >= 25 && temperature < 35)
	{
		cout << "Hot!";
	}
	else if (temperature >= 15 && temperature < 25)
	{
		cout << "Warm!";
	}
	else if (temperature >= 5 && temperature < 15)
	{
		cout << "Cool!";
	}
	else if (temperature < 5)
	{
		cout << "Cold!";
	}
}

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task7**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task7.cpp)

<hr style="border-width: 5px !important;">

`Задача 8: Напишете програма, която приема от стандартния вход цяло положително число. Програмата да извежда деня от седмицата спрямо кратността на числото на 7, т.е. ако числото при делене на 7 дава остатък 0 - Понеделник, остатък 1 - Вторник, и т.н. до остатък 6 - Неделя.`

`Решение:`
```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int day;
	cin >> day;
	if (day % 7 == 0)
	{
		cout << "Monday";
	}
	else if (day % 7 == 1)
	{
		cout << "Tuesday";
	}
	else if (day % 7 == 2)
	{
		cout << "Wednesday";
	}
	else if (day % 7 == 3)
	{
		cout << "Thursday";
	}
	else if (day % 7 == 4)
	{
		cout << "Friday";
	}
	else if (day % 7 == 5)
	{
		cout << "Saturday";
	}
	else if (day % 7 == 6)
	{
		cout << "Sunday";
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task8**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task8.cpp)

<hr style="border-width: 5px !important;">

`Задача 9: Да се напише прост калкулатор, който поддържа операциите +, -, *, / на две реални числа. От конзолата се прочита число, операция и още едно число и се извежда резултатът.`

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char operation;
	cout << "`Line => (number a) (operation) (number b) \n";
	cin >> a >> operation >> b;
	double sum = a + b;
	double diff = a - b;	
	double mult = a * b;
	double div = 0.0;
	if (b != 0)
	{
		double div = a / b;
	}
	else
	{
		cout << "Division by zero!";
	}
	if (operation == '+')
	{
		cout << "= " << sum << "";
	}
	else if (operation == '-')
	{
		cout << "= " << diff << "";
	}
	else if (operation == '*')
	{
		cout << "= " << mult << "";
	}
	else if (operation == '/')
	{
		cout << "= " << div << "";
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task9**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%202/Tasks/cppFiles/Task9.cpp)

<hr style="border-width: 5px !important;">
