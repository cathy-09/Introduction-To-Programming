# Решения

## Задачи от седмица първа
`Задача 1: Въвежда се двуцифрено число. Да се отпечата 1, ако числото е валидна дата за месец януари и 0, ако не е.`
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 20                                                          | 1                                                           |
| 34                                                          | 0                                                           |

`Решение:`
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

`Да се прочетат от конзолата 4 реални числа - a, b, c, d. Да се изведе 1, ако интервалите [a, b] и [c, d] се пресичат, и 0, ако не се пресичат. `
| Вход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Изход&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|-------------------------------------------------------------|-------------------------------------------------------------|
| 1 4 5 8                                                          | 0                                                           |
| 1 10 5 12                                                          | 1                                                           |

`Решение:`
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

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%201/Tasks/cppFiles/Task4.cpp)
