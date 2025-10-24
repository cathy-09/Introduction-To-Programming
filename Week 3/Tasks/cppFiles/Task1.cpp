#include <iostream>

int main()
{
	int n, factorial = 1;
	std::cout << "Enter a positive number pls: ";
	std::cin >> n;
	if (n > 0)
	{
		for (int i = 1; i <= n; ++i)
		{
			factorial *= i;
		}
		std::cout << n << "! = " << factorial << std::endl;
	}
	else
	{
		std::cout << "Factorial is not defined. I said enter a positive number pls" << std::endl;
	}
}

//#include <iostream>
//
//int main()
//{
//	int n, factorial = 1;
//	std::cout << "Enter a positive number pls: ";
//	std::cin >> n;
//	if (n > 0)
//	{
//		std::cout << n << "! = ";
//		for (int i = 1; i <= n; ++i)
//		{
//			if (i == n) 
//			{
//				std::cout << n << " ";
//				break;
//			}
//			factorial *= i;
//			std::cout << i << " * ";
//		}
//		std::cout << "= " << factorial;
//	}
//	else
//	{
//		std::cout << "Factorial is not defined. I said enter a positive number pls" << std::endl;
//	}
//}