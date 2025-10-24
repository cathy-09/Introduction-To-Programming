#include <iostream>
int main()
{
	int  number, temp = 0, counter = 0;;
	std::cin >> number;
	while (number != 0)
	{
		temp = temp * 10 + number % 10;
		number = number / 10;
		counter++;
	}
	std::cout << "Count: " << counter << std::endl;
}

