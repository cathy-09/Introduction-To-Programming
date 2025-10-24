#include <iostream>

int main()
{
	int const TARGET_COUNT = 3;
	int num, sum = 0, count = 0;
	while (count != TARGET_COUNT)
	{
		std::cin >> num;
		if (num % 7 == 0)
		{
			sum = sum + num;
			count++;
		}
	}
	std::cout << "Sum of first 3 num devide by 7: " << sum << std::endl;
}