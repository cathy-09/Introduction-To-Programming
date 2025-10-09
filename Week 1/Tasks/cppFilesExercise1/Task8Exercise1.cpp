#include <iostream>
using namespace std;
int main()
{
	const double epsilon = 0.0002;
	double a, b;
	cin >> a >> b;
	double abs = (a - b);
	if (abs < 0)
	{
		abs = abs * (-1);
	}
	if (abs > epsilon)
	{
		cout << "" << false << "";
	}
	else
	{
		cout << "" << true << "";
	}
}