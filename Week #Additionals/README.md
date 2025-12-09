# Решения

## Задачи контролно 3

`Задача 1: Напишете функция на езика на C++ с име convertString, която приема приема като параметри: (1) символен низ str, (2) символ ch. Функцията да преобразува низа str, като го обърне наобратно и всяка срещната малка буква от латинската азбука се заменя със съответната ѝ главна, а всяка главна – с малка, всяка срещната цифра се заменя с остатъка при делението ѝ на 2, а всеки символ, различен от цифра и буква, се заменя с ch..`

`Решение:`
```cpp
//zadacha 1
#include <iostream>
const int MAX_LENGTH = 100;
void convertString(char str[], char ch);
void findLength(char str[], int& length);
void reverseString(char str[], int length);
void ToUpperCase(char& ch);
void ToLowerCase(char& ch);
void DigitToBinary(char& ch);
void specialChar(char& ch, char replaceCh);

int main()
{
    char str[MAX_LENGTH];
    char ch;
    std::cout << "str = ";
    std::cin.getline(str, MAX_LENGTH);
    std::cout << "ch = ";
    std::cin >> ch;
    convertString(str, ch);
    std::cout << str << std::endl;
}

void findLength(char str[], int& length)
{
    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
}
void reverseString(char str[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
void ToUpperCase(char& ch)
{
    ch = ch - ('a' - 'A');
}
void ToLowerCase(char& ch)
{
    ch = ch + ('a' - 'A');
}
void DigitToBinary(char& ch)
{
    ch = (ch - '0') % 2 + '0';
    //(ch - '0') превръща символа в цифра, намираме остатъка при деление на 2 и после
    //пак го превръщаме в символ, като добавяме '0'
}
void specialChar(char& ch, char replaceCh)
{
    ch = replaceCh;
}

void convertString(char str[], char ch)
{
    int length = 0;
    findLength(str, length);
    reverseString(str, length);
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ToUpperCase(str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ToLowerCase(str[i]);
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            DigitToBinary(str[i]);
        }
        else
        {
            specialChar(str[i], ch);
        }
    }
}
```

<hr style="border-width: 5px !important;">

`Задача 2: Имате редица от N на брой числа. Да се напише програма, която прочита от стандартния вход числата N и k, както и елементите на редицата и извежда сумата на минималните елементи на всички подредици с дължина k.`

`Решение:`
```cpp
//zadacha 2
#include <iostream>
const int MAX_N = 1000;
void minAndSumInSequence(int arr[], int size, int k);
int findMinInSubarray(int arr[], int start, int k);

int main()
{
    int n, k;
    std::cin >> n >> k;

    int arr[MAX_N];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    minAndSumInSequence(arr, n, k);
}
void minAndSumInSequence(int arr[], int size, int k)
{
    int totalMinSum = 0;

    for (int start = 0; start <= size - k; start++)
    {
        int minElement = findMinInSubarray(arr, start, k);
        totalMinSum += minElement;
    }

    std::cout << totalMinSum << std::endl;
}

int findMinInSubarray(int arr[], int start, int k)
{
    int minElement = arr[start];
    for (int i = start + 1; i < start + k; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
    return minElement;
}
```

<hr style="border-width: 5px !important;">

`Задача 3: Какво ще изведе кодът по-долу. Забелязвате ли някакви проблеми в него? Обосновете подробно отговора си.`

`Решение:`
```cpp
//zadacha 3
#include <iostream>
int const SIZE = 10;
long nums[] = { 15, 60, 90 };

int fun1(long* const a, char b[]) 
{
    char* p = new char[SIZE]; //Магически числа - лоша практика на програмиране
    for (size_t i = 0; i < SIZE; i++)
    { 
        p[i] = b[i]; //Копира се съдържанието на масива b в новия масив p
    }
    for (size_t i = 0; i < SIZE; i++)
    { 
        std::cout << b[i] << ' '; //Извежда се h e l l o 0 
        //и още 4 символа, които не са дефинирани (празни)
    }
    std::cout << a[9] << std::endl; //недефинирано поведение (извежда се 0)
    a[9] = 200;
    std::cout << a[9] << std::endl;  //Извежда се 200, защото сме записали стойност на тази позиция
    std::cout << *nums << std::endl; //Указател към първия елемент на масива nums
    //15 - стойността на първия елемент на глобалния масив
    return 0;
}

int main()
{
    long nums[SIZE] = { 0, 10, 20, 30 };
    char str[SIZE] = "hello";

    fun1(nums, str); //подаваме локалния масив nums и масива str
    std::cout << *nums << std::endl //0
    //стойността на първия елемент на локалния масив nums
    << ::nums; //адрес на глобалния масив
}
```

<hr style="border-width: 5px !important;">
