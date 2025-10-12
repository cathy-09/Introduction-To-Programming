#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double epsilon = 0.0002;
	double r, x, y;
	cin >> r >> x >> y;
	double distance = sqrt(pow(x, 2) + pow(y, 2));
	if (fabs(distance - r) < epsilon)
	{
		cout << "On the border";
	}
	else if (distance < r)
	{
		cout << "Inside";
	}
	else
	{
		cout << "Outside";
	}
}