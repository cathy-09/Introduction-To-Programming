#include <iostream>

int main()
{
    int firstNum, secondNum;
    std::cout << "Enter first number: ";
    std::cin >> firstNum;
    std::cout << "Enter second number: ";
    std::cin >> secondNum;
    int greatestPossibleDivider = 0;
    if (firstNum < secondNum)
    {
        greatestPossibleDivider = firstNum;
    }
    else
    {
        greatestPossibleDivider = secondNum;
    }
    for (int i = greatestPossibleDivider; i > 0; i--)
    {
        if (firstNum % i == 0 && secondNum % i == 0)
        {
            std::cout << i << " ";
        }
    }
}
