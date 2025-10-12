#include <iostream>
using namespace std;
int main()
{
	int temperature;
	cin >> temperature;
	if (temperature >= 35)
	{
		cout << "Too hot!";
	}
	else if (temperature >= 25 && temperature < 35)
	{
		cout << "Hot!";
	}
	else if (temperature >= 15 && temperature < 25)
	{
		cout << "Warm!";
	}
	else if (temperature >= 5 && temperature < 15)
	{
		cout << "Cool!";
	}
	else if (temperature < 5)
	{
		cout << "Cold!";
	}
}