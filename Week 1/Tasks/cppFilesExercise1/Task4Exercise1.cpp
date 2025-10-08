#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short  a, reversed = 0;
    cin >> a;
    while (a != 0)
    {
        reversed = reversed * 10 + a % 10;
        a = a / 10;
    };
    cout << "" << reversed % 7 << "";
}