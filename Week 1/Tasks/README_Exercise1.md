# Решения на допълнителните задачи

## Допълнителни задачи от седмица първа
`Задача 1: Въведете цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 0                                                          | 1                                                           |
| 689                                                          | 0                                                           |
| 346                                                          | 1                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
	if (a % 2 == 0)
	{
		cout << "" << true << "";
	}
	else
	{
		cout << "" << false << "";
	}
}
```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task1Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task1Exercise1.cpp)

<hr style="border-width: 5px !important;">

`Задача 2: Въведете цяло число. Отпечатайте го без последната му цифра.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 0                                                          | 0                                                           |
| 689                                                          | 68                                                           |
| 346786453                                                          | 34678645                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	long long a;
	cin >> a;
	cout << "" << (a / 10) << "";
}
```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task2Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task2Exercise1.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: Въведете цяло число. Отпечатайте последната му цифра.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 0                                                          | 0                                                           |
| 689                                                          | 9                                                           |
| 346786453                                                          | 3                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	long long a;
	cin >> a;
	cout << "" << (a % 10) << "";
}
```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task3Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task3Exercise1.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: Въведете четирицифрено число. Неговото огледално число получаваме, от цифрите на даденото, записани в обратен ред. Отпечатайте остатъка при деление на 7 на огледалното число на даденото.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 689                                                          | 6                                                           |
| 276                                                          | 0                                                           |

> [!TIP]
> Огледалното е 986 и 986 ≡ 6 (𝑚𝑜𝑑 7)
> 
> Огледалното е 672 и 672 ≡ 0 (𝑚𝑜𝑑 7)

`Решение:`
```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short  a, reversed = 0;
    cin >> a;
    while (a != 0)
    {
        reversed = reversed * 10 + a % 10;
        a = a / 10;
    };
    cout << "" << reversed % 7 << "";
}
```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task4Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task4Exercise1.cpp)

<hr style="border-width: 5px !important;">

`Задача 5: Въведете символ. Отпечатайте 1, ако е английска съгласна буква, и 0 в противен случай.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| a                                                          | 0                                                           |
| b                                                          | 1                                                           |
| C                                                          | 1                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    char sybol;
    cin >> sybol;
    if (!(sybol == 'A' 
        || sybol == 'E' 
        || sybol == 'O' 
        || sybol == 'I' 
        || sybol == 'U'
        || sybol == 'a'
        || sybol == 'e'
        || sybol == 'o'
        || sybol == 'i'
        || sybol == 'u'))
    {
        cout << "" << false << "";
    }
    else
    {
        cout << "" << true << "";
    }
}
```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task5Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task5Exercise1.cpp)

<hr style="border-width: 5px !important;">

<hr style="border-width: 5px !important;">

`Задача 6: Въведете две цели числа. Отпечатайте по-голямото от тях. Ако са равни, отпечатайте символа за равенство.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 257 257                                                          | =                                                           |
| 468 123                                                          | 468                                                           |
| 8732 486553                                                          | 486553                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		cout << "" << a << "";
	}
	else if (b > a)
	{
		cout << "" << b << "";
	}
	else
	{
		cout << "" << "=" << "";
	}
}
```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task6Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task6Exercise1.cpp)

<hr style="border-width: 5px !important;">

`Задача 7: Нека имаме две дефинирани променливи от тип int. Да се разменят техните стойности.`
> [!TIP]
> Това може да стане по няколко начина, включително с и без употреба на помощна променлива.
`Решение 1:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	int a, b, temp = 0;
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "A:" << a << "\n";
	cout << "B:" << b << "";
}
```
> [!NOTE]
> Може да откриете допълнителните задачи тук:
> [**Task7Exercise1Pt1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task7Exercise1Pt1.cpp)

`Решение 2:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "A:" << a << "\n";
	cout << "B:" << b << "";
}
```
> [!NOTE]
> Може да откриете допълнителните задачи тук:
> [**Task7Exercise1Pt2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task7Exercise1Pt2.cpp)

<hr style="border-width: 5px !important;">

`Задача 8: Въведете две числа с плаваща запетая. Проверете дали те са равни и върнете 1, ако са, и 0, ако не са.`
> [!TIP]
> Намерете случай, за който въведените числа са различни, но програмата казва, че са еднакви
`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	const double epsilon = 0.0002;
	double a, b;
	cin >> a >> b;
	if ((a - b) < epsilon)
	{
		cout << "" << true << "";
	}
	else
	{
		cout << "" << false << "";
	}
}
```
> [!NOTE]
> Може да откриете допълнителните задачи тук:
> [**Task8Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFilesExercise1/Task8Exercise1.cpp)

<hr style="border-width: 5px !important;">
