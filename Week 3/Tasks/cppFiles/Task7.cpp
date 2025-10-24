#include <iostream>

int main()
{
	int num, countDivider = 0;
	std::cout << "Enter a num: ";
	std::cin >> num;
	if (num <= 1)
	{
		std::cout << "Num is not prime" << std::endl;
	}
	else
	{
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				countDivider++;
			}
		}
		if (countDivider == 2)
		{
			std::cout << "Congratulations. Num is prime." << std::endl;
		}
		else
		{
			std::cout << "Num is not prime" << std::endl;
		}
	}
}