#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((b < c) || (d < a))
    {
        cout << "" << false << "";
    }
    else
    {
        cout << "" << true << "";
    }
}

#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	bool isValid = (b < c) || (d < a);
	cout << "" << isValid << "";
}
