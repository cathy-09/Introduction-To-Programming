# Решения на допълнителните задачи

## Допълнителни задачи от седмица трета седмица
`Задача 1: Да се напише програма, която чете от конзолата 2 цели числа n и m в интервала [0, 256] и изписва символите на всички ASCII кодове в интервала [n, m]`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| Start: 65 <br/> End: 75                                                          | 65 --> A <br/> 66 --> B <br/> 67 --> C <br/> 68 --> D <br/> 69 --> E <br/>70 --> F <br/> 71 --> G <br/> 72 --> H <br/> 73 --> I <br/> 74 --> J <br/> 75 --> K                                                           |

`Решение:`
```cpp
#include <iostream>

int main()
{
	int n, m, temp = 0;
	std::cout << "Start: ";
	std::cin >> n;
	std::cout << "End: ";
	std::cin >> m;
	if (n < 0 || n > 256 || m < 0 || m > 256) 
	{
		std::cout << "Wrong intervals. Enter number in intervals [0, 256]!" << std::endl;
		return 1;
	}
	if (n > m) 
	{
		temp = n;
		n = m;
		m = temp;
	}
	for (int i = n; i <= m; i++) 
	{
		std::cout << i << " --> " << (char)i << std::endl;
	}
}

```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task1Exercise3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFilesExercise3/Task1Exercise3.cpp)

<hr style="border-width: 5px !important;">

`Задача 2: Да се прочетe от конзолата естествено число и да се намери факториелът му.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 5                                                          | Factorial: 120                                                           |

`Решение:`
```cpp
#include <iostream>
int main()
{
	int n;
	long factorial = 1;
	std::cin >> n;
	if (n < 0) 
	{
		std::cout << "The number must be positive!" << std::endl;
		return 1;
	}
	for (int i = 1; i <= n; i++) 
	{
		factorial *= i;
	}
	std::cout << "Factorial: " << factorial << std::endl;
}
```

> [!NOTE]
> Може да откриете допълнителните задачи тук:
>  [**Task2Exercise3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%203/Tasks/cppFilesExercise3/Task2Exercise3.cpp)

<hr style="border-width: 5px !important;">
