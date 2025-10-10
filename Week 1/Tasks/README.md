# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/README_Exercise1.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица първа
`Задача 1: Въвежда се двуцифрено число. Да се отпечата 1, ако числото е валидна дата за месец януари и 0, ако не е.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 20                                                          | 1                                                           |
| 34                                                          | 0                                                           |

`Решение 1:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    int januaryDays;
    cin >> januaryDays;
    if (januaryDays <= 31)
    {
        cout << "" << true << "";
    }
    else
    {
        cout << "" << false << "";
    }
}
```

`Решение 2:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	int januaryDays;
	cin >> januaryDays;
	bool isValid = (januaryDays <= 31);
	cout << "" << isValid << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task1.cpp)

<hr style="border-width: 5px !important;">

`Задача 2: Да се напише програма, която чете от конзолата 2 цели числа a и b и отпечатва остатъка и частното при делението им.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 13 5                                                          | 2 3                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int remainder = a % b;
    int quotient = a / b;
    cout << "" << quotient << " " ;
    cout << "" << remainder << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task2.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: Въвежда се число в мерна единица км. Отпечатайте на колко мили се равнява. (1km = 0.621371 miles).`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 20                                                          | 12.4274                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    const double mile = 0.621371;
    double a;
    cin >> a;
    double kilometersToMiles = a * mile;
    cout << "" << kilometersToMiles << "" ;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task3.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: Да се прочетат от конзолата 4 реални числа - a, b, c, d. Да се изведе 1, ако интервалите [a, b] и [c, d] се пресичат, и 0, ако не се пресичат. `
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 1 4 5 8                                                          | 0                                                           |
| 1 10 5 12                                                          | 1                                                           |

`Решение 1:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((b < c) || (d < a))
    {
        cout << "" << false << "";
    }
    else
    {
        cout << "" << true << "";
    }
}
```

`Решение 2:`
```cpp
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	bool isValid = (b < c) || (d < a);
	cout << "" << isValid << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task4.cpp)

<hr style="border-width: 5px !important;">

`Задача 5: Да се напише програма, която приема 4 цели числа и отпечатва 1, ако числата образуват геометрична прогресия в реда, в който са въведени, и 0, ако съответно не образуват.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 1 4 5 8                                                          | 0                                                           |
| 2 4 6 8                                                          | 1                                                           |

> [!WARNING]
> Вторите примерни входни данни отговарят на условието за аритметична прогересия.

`Решение 1:`
```cpp
//pt.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((pow(b, 2) == a * c) && (pow(c, 2) == b * d))
    {
        cout << "" << true << ""; 
    }
    else
    {
        cout << "" << false << "";
    }
}
```

`Решение 1 без if:`
```cpp
//pt.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	bool isValid = (b * b == a * c) && (c * c == b * d);
	cout << "" << isValid << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5 Pt1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task5Pt1.cpp)

`Решение 2:`
```cpp
//pt.2
#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + d == c + b)
    {
        cout << "" << true << ""; 
    }
    else
    {
        cout << "" << false << "";
    }
}

```

`Решение 2 без if:`
```cpp
//pt.2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	bool isValid = (a + d == c + b);
	cout << "" << isValid << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5 Pt2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task5Pt2.cpp)

<hr style="border-width: 5px !important;">

`Задача 6: Въвежда се цяло число n. Да се изведе 1, ако n се дели на 2, но не се дели на 3, и 0 в противен случай.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 4                                                          | 1                                                           |
| 6                                                          | 0                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0 && n % 3 == 1)
    {
        cout << "" << true << ""; 
    }
    else
    {
        cout << "" << false << "";
    }
}
```

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isValid = (n % 2 == 0 && n % 3 == 1)
    cout << "" << isValid << ""; 
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

`Задача 7: Въвеждат се 3 цели числа. След това се печата 1, ако поне едно от тях е било отрицателно, или 0 в противен случай. `
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 4 2 6                                                          | 0                                                           |
| -1 5 -4                                                          | 1                                                           |

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a < 0 || b < 0 || c < 0)
    {
        cout << "" << true << ""; 
    }
    else
    {
        cout << "" << false << "";
    }
}
```

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    bool isValid = (a < 0 || b < 0 || c < 0)
    cout << "" << isValid << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task7**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task7.cpp)

<hr style="border-width: 5px !important;">

`Задача 8: Да се въведат от конзолата коефициенти за полином от втора степен ax^2 + bx + c, както и реално число x. Да се изчисли стойността на полинома за въведената стойност. `
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 2 4 5 2                                                          | 21                                                           |

`Решение:`
```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int  a, b, c;
    double x;
    cin >> a >> b >> c;
    cin >> x;
    double valuePolinom = a * x * x + b * x + c;
    cout << "" << valuePolinom << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task8**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task8.cpp)

<hr style="border-width: 5px !important;">

`Задача 9: Да се напише програма, която чете от конзолата брой секунди и изчислява колко дни, часове, минути и секунди са. `
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 1234567                                                          | 14 6 56 7                                                           |

> [!TIP]
> 1 ден = 86400 секунди
> 
> 1 час = 3600 секунди
> 
> 1 минута = 60 секунди.

`Решение:`
```cpp
#include <iostream>
using namespace std;
int main()
{
    long long seconds;
    cin >> seconds;
    long long days = seconds / 86400;
    seconds = seconds % 86400;
    long long hours = seconds / 3600;
    seconds = seconds % 3600;
    long long minutes = seconds / 60;
    seconds = seconds % 60;
    cout << "" << days << " ";
    cout << "" << hours << " ";
    cout << "" << minutes << " ";
    cout << "" << seconds << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task9**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task9.cpp)

<hr style="border-width: 5px !important;">

`Задача 10: Въвежда се четирицифрено число. Да се намери огледалното на него.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 1234                                                          | 4321                                                           |

`Решение:`
```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short  a, reversed = 0;
    cin >> a;
    while(a != 0)
    {
        reversed = reversed * 10 + a % 10;
        a = a / 10;
    };
    cout << "" << reversed << "";
}
```

`Решение:`
```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short  a, thousands = 0, hundreds = 0, tens = 0, units = 0, reversed = 0;
    cin >> a;
	thousands = a / 1000;
	hundreds = (a / 100) % 10;
	tens = (a / 10) % 10;
	units = a % 10;
	reversed = units * 1000 + tens * 100 + hundreds * 10 + thousands;
    cout << "" << reversed << "";
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task10**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task10.cpp)

<hr style="border-width: 5px !important;">
