#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int number;
	int min = 0;
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		if (n > 20)
		{
			std::cout << "Ops... Check your assignment!!!" << std::endl;
			return 0;
		}
		std::cin >> number;
		if (i == 0)
		{
			max = number;
			min = number;
		}
		if (number > max)
		{
			max = number;
		}
		if (number < min)
		{
			min = number;
		}
	}
	std::cout << "Max: " << max << std::endl;
	std::cout << "Min: " << min << std::endl;
}
