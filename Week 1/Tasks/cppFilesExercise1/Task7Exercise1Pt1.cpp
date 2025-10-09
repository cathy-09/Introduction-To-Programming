#include <iostream>
using namespace std;
int main()
{
	int a, b, temp = 0;
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "A:" << a << "\n";
	cout << "B:" << b << "";
}