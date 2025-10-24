#include <iostream>
int main()
{
	int m = 0, n = 0;
	std::cout << "Enter m: ";
	std::cin >> m;
	std::cout << "Enter n: ";
	std::cin >> n;

	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 1)
		{
			std::cout << "|";
			for (int j = 0; j < n; j++)
			{
				std::cout << "-";
			}
			std::cout << "|" << std::endl;
		}
		else
		{
			std::cout << "|";
			for (int j = 0; j < n; j++)
			{
				std::cout << "*";
			}
			std::cout << "|" << std::endl;
		}
	}
}
