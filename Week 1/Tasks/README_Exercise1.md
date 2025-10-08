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
