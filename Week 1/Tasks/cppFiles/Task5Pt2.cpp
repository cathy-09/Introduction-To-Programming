#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + d == c + b)
    {
        cout << "" << true << "";
    }
    else
    {
        cout << "" << false << "";
    }
}


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	bool isValid = (a + d == c + b);
	cout << "" << isValid << "";
}
