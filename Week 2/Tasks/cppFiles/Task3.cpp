#include <iostream>
using namespace std;
int main() 
{
	char sybol;
	cin >> sybol;
	if (sybol >= 'a' && sybol <= 'z')
	{
		cout << "" << (char)(sybol - 'a' + 'A') << "";
	}
	else if (sybol >= 'a' && sybol <= 'z')
	{
		cout << "" << (char)(sybol - 'A' + 'a') << "";
	}
	else
	{
		cout << "Invalid!";
	}
}