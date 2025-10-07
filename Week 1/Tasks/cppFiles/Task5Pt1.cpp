#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((pow(b, 2) == a * c) && (pow(c, 2) == b * d))
    {
        cout << "" << true << "";
    }
    else
    {
        cout << "" << false << "";
    }
}