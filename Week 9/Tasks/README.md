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

`Задача 5: Напишете функция, която приема два символни низа: text и result (който е празен, но в който има достатъчно място), символ symbol и позиция i. Функцията да сложи в result съдържанието на text, но със символът symbol вмъкнат на i-та позиция. Броим, започвайки от 0.`

`Решение:`
```cpp
#include <iostream>
const int MAX_SIZE = 100;
void insertSymbolAtPosition(const char* text, char* result, char symbol, int i);

int main()
{
    char text[MAX_SIZE];
    char result[MAX_SIZE + 1];
    char symbol;
    int position;
    std::cout << "Enter text: ";
    std::cin.getline(text, MAX_SIZE);
    std::cout << "Enter symbol: ";
    std::cin >> symbol;
    std::cout << "Enter position: ";
    std::cin >> position;
    insertSymbolAtPosition(text, result, symbol, position);
    std::cout << "Result text: " << result << std::endl;
}

void insertSymbolAtPosition(const char* text, char* result, char symbol, int i)
{
    int j = 0;
    for (; j < i && text[j] != '\0'; j++)
    {
        result[j] = text[j];
    }
    result[j] = symbol;
    j++;
    for (; text[j - 1] != '\0'; j++)
    {
        result[j] = text[j - 1];
    }
    result[j] = '\0';
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task5**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/cppFiles/Task5.cpp)

<hr style="border-width: 5px !important;">

`Задача 6: Напишете функция, която приема символен низ и го извежда обърнат на стандартния изход.`

`Решение:`
```cpp
#include <iostream>
const int MAX_SIZE = 100;
void removeCharacter(char str[], char ch);

int main()
{
    char str[MAX_SIZE];
    char ch;
    std::cin.getline(str, MAX_SIZE);
    std::cin >> ch;
    removeCharacter(str, ch);
	std::cout << str << std::endl;
}

void removeCharacter(char str[], char ch)
{
    int writeIndex = 0;
    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++)
    {
        if (str[readIndex] != ch)
        {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }
    str[writeIndex] = '\0';
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task6**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/cppFiles/Task6.cpp)

<hr style="border-width: 5px !important;">

`Задача 7: Напишете функция, която приема символен низ и го извежда обърнат на стандартния изход.`

`Решение:`
```cpp
#include <iostream>
int const TWO_SYBOLS = 10;
const int MAX_SIZE = 100;
void compress(char sourse[], char destination[]);

int main()
{
    char sourse[MAX_SIZE];
    char destination[MAX_SIZE];
    std::cin.getline(sourse, MAX_SIZE);
    compress(sourse, destination);
	std::cout << destination << std::endl;
}
void compress(char sourse[], char destination[])
{
    int i = 0;
    int j = 0;

    while (sourse[i] != '\0')
    {
        char current = sourse[i];
        int count = 0;
        while (sourse[i] == current)
        {
            count++;
            i++;
        }
        destination[j++] = current;
        if (count >= TWO_SYBOLS)
        {
            int temp = count;
            int digits[TWO_SYBOLS];
            int digitCount = 0;
            while (temp > 0)
            {
                digits[digitCount++] = temp % 10;
                temp /= 10;
            }
            for (int k = digitCount - 1; k >= 0; k--)
            {
                destination[j++] = digits[k] + '0';
            }
        }
        else
        {
            destination[j++] = count + '0';
        }
    }

    destination[j] = '\0';
}
```

> [!NOTE]
> Може да откриете cpp файл тук:
>  [**Task7**](https://github.com/cathy-09/Introduction-To-Programming/blob/main/Week%209/Tasks/cppFiles/Task7.cpp)

<hr style="border-width: 5px !important;">
