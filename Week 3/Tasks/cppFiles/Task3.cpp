#include <iostream>

int main()
{
	short  number, reversed = 0;
	std::cin >> number;
	if (number % 10 == 0)
	{
		std::cout << "The number has zero.";
	}
	else
	{
		while (number != 0)
		{
			reversed = reversed * 10 + number % 10;
			number = number / 10;
		}
		std::cout << "" << reversed << "";
	}
}
