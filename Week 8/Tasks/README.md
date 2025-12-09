# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise9**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/README_Exercise8.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица осма

`Задача 1: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task1.cpp)

<hr style="border-width: 5px !important;">

`Задача 2: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task2.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task3.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task4.cpp)

<hr style="border-width: 5px !important;">

`Задача 5: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task5.cpp)

<hr style="border-width: 5px !important;">

`Задача 6: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

`Задача 7: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task7**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task7.cpp)

<hr style="border-width: 5px !important;">

`Задача 8: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task8**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task8.cpp)

<hr style="border-width: 5px !important;">

`Задача 9: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task9**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task9.cpp)

<hr style="border-width: 5px !important;">

`Задача 10: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task10**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task10.cpp)

<hr style="border-width: 5px !important;">

`Задача 11: `

`Решение:`
```cpp

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task11**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task11.cpp)

<hr style="border-width: 5px !important;">

`Задача 12: Напишете функция, която приема масив и размера му. Разглеждаме масива като множество. Функцията да извежда на стандартния изход всички подмножества на масива.`

`Решение:`
```cpp
#include <iostream>
void printSubsets(int arr[], int size);
//[] , [1], [2], [3], [1, 2], [2, 3], [1, 3], [1, 2, 3]

int main()
{   
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printSubsets(arr, size);
}

void printSubsets(int arr[], int size)
{
    int totalSubsets = 1 << size;
    for (int i = 0; i < totalSubsets; i++)
    {
        std::cout << "[";
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j) != 0)
            {
                std::cout << arr[j];
                if (j < size - 1 && (i & ((1 << (j + 1)) - 1)) != 0)
                {
                    std::cout << ", ";
                }
            }
        }
        std::cout << "]" << std::endl;
    }
}

```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task12**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%208/Tasks/cppFiles/Task12.cpp)

<hr style="border-width: 5px !important;">
