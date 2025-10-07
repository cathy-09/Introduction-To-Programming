#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int  a, b, c;
    double x;
    cin >> a >> b >> c;
    cin >> x;
    double valuePolinom = a * pow(x, 2) + b * x + c;
    cout << "" << valuePolinom << "";
}