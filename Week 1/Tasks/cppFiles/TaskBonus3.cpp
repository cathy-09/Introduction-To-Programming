#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double bigger = (a + b + abs(a - b)) / 2;
    cout << bigger;
}