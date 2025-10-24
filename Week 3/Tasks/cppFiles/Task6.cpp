#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n <= 0)
	{
		std::cout << "Ops... You are stupid! n must be A positive number.";
	}
	else if (n == 1)
	{
		std::cout << 1 << " ";
	}
	else if (n == 2)
	{
		std::cout << 1 << " ";
	}
	else
	{
		long first = 0, second = 1, next = 0;
		for (int i = 2; i <= n; i++)
		{
			next = first + second;
			first = second;
			second = next;
		}
		std::cout << "Fibbonacci: " << next << " ";
	}
}