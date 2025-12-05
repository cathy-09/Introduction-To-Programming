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
