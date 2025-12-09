# Решения

> [!IMPORTANT]
> Допълнителни задачи и техните решения можете да откриете тук:
>  [**Exercise9**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/README_Exercise5.md)

<hr style="border-width: 5px !important;">

## Задачи от седмица девета

`Задача 1: Напишете функция, която приема масив от цели числа като указател (и размера му) и извежда на стандартния изход адреса на най-големия елемент на масива.`

`Решение:`
```cpp
#include <iostream>
void findMaxElementAddress(int* arr, int size);

int main()
{
	int arr[] = { 3, 5, 7, 2, 8, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	findMaxElementAddress(arr, size);
}

void findMaxElementAddress(int* arr, int size) {
	if (size <= 0)
	{
		std::cout << "There is no elements here." << std::endl;
		return;
	}
	int* maxPtr = arr;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > *maxPtr)
		{
			maxPtr = &arr[i];
		}
	}
	std::cout << "Address of max: " << maxPtr << std::endl;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task1**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/cppFiles/Task1.cpp)

<hr style="border-width: 5px !important;">

`Задача 2: Напишете функция, която приема масив от цели числа (и размера му) и извежда на стандартния изход елементите на масива, без да използва оператора [].`

`Решение:`
```cpp
#include <iostream>
void printArray(int* arr, int size);

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
}

void printArray(int* arr, int size)
{
    int* pointer = arr;
    while (pointer < arr + size)
    {
        std::cout << *pointer << " ";
        pointer++;
    }
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task2**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/cppFiles/Task2.cpp)

<hr style="border-width: 5px !important;">

`Задача 3: Напишете функция, която приема масив от символи. Масивът трябва да съдържа само малки латински букви - ако това не е така, върнете лъжа. Иначе, функцията да връща дали масивът съдържа само уникални букви, тоест дали всеки символ от масива се среща най-много по веднъж.`

`Решение:`
```cpp
#include <iostream>
int const MAX_SIZE = 100;
bool isLowercase(char arr[]);
bool hasUniqueChars(char arr[]);

int main()
{
	char arr[MAX_SIZE];
	std::cin.getline(arr, MAX_SIZE);
	if (!isLowercase(arr))
	{
		std::cout << "False";
	}
	else
	{
		if (hasUniqueChars(arr))
		{
			std::cout << "It Has.";
		}
		else
		{
			std::cout << "It Does Not Have.";
		}
	}
}

bool isLowercase(char arr[])
{
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] < 'a' || arr[i] > 'z')
		{
			return false;
		}
	}
	return true;
}
bool hasUniqueChars(char arr[])
{
	for (int i = 0; arr[i] != '\0'; i++)
	{
		for (int j = i + 1; arr[j] != '\0'; j++)
		{
			if (arr[i] == arr[j])
			{
				return false;
			}
		}
	}
	return true;
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task3**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/cppFiles/Task3.cpp)

<hr style="border-width: 5px !important;">

`Задача 4: Напишете функция, която приема символен низ и го извежда обърнат на стандартния изход.`

`Решение:`
```cpp
#include <iostream>
int const MAX_SIZE = 100;
void reversedString(char str[]);

int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);
	reversedString(str);
}

void reversedString(char str[])
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		std::cout << str[i];
	}
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task4**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/cppFiles/Task4.cpp)

<hr style="border-width: 5px !important;">
