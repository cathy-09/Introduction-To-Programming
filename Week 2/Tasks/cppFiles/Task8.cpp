#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int day;
	cin >> day;
	if (day % 7 == 0)
	{
		cout << "Monday";
	}
	else if (day % 7 == 1)
	{
		cout << "Tuesday";
	}
	else if (day % 7 == 2)
	{
		cout << "Wednesday";
	}
	else if (day % 7 == 3)
	{
		cout << "Thursday";
	}
	else if (day % 7 == 4)
	{
		cout << "Friday";
	}
	else if (day % 7 == 5)
	{
		cout << "Saturday";
	}
	else if (day % 7 == 6)
	{
		cout << "Sunday";
	}
}