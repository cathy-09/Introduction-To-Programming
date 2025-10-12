#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char operation;
	cout << "`Line => (number a) (operation) (number b) \n";
	cin >> a >> operation >> b;
	double sum = a + b;
	double diff = a - b;
	double mult = a * b;
	double div = 0.0;
	if (b != 0)
	{
		double div = a / b;
	}
	else
	{
		cout << "Division by zero!";
	}
	if (operation == '+')
	{
		cout << "= " << sum << "";
	}
	else if (operation == '-')
	{
		cout << "= " << diff << "";
	}
	else if (operation == '*')
	{
		cout << "= " << mult << "";
	}
	else if (operation == '/')
	{
		cout << "= " << div << "";
	}
}