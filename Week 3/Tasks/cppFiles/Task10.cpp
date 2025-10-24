#include <iostream>
int main()
{
	int n = 0;
	std::cout << "Enter n: ";
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			std::cout << " ";
		}
		for (int q = 1; q <= i; q++)
		{
			std::cout << q;
		}
		for (int q = i - 1; q >= 1; q--)
		{
			std::cout << q;
		}
		std::cout << std::endl;
	}
	for (int i = 1; i <= n + 1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			std::cout << " ";
		}
		std::cout << "*" << std::endl;
	}
}