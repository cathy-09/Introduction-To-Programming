#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int theBigest = 0;
	if (a > b && a > c)
	{
		theBigest = a;
	}
	else if (b > a && b > c)
	{
		theBigest = b;
	}
	else
	{
		theBigest = c;
	}
	cout << "" << theBigest << "";
}
