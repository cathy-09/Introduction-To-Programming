#include <iostream>
int main()
{
	int n = 0;
	std::cout << "Enter n: ";
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int p = 1; p <= i; p++)
		{
			std::cout << "$ ";
		}
		std::cout << std::endl;
	}
}