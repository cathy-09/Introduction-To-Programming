#include <iostream>
using namespace std;
int main()
{
    int januaryDays;
    cin >> januaryDays;
    if (januaryDays <= 31)
    {
        cout << "" << true << "";
    }
    else
    {
        cout << "" << false << "";
    }
}

#include <iostream>
using namespace std;
int main()
{
	int januaryDays;
	cin >> januaryDays;
	bool isValid = (januaryDays <= 31);
	cout << "" << isValid << "";
}
