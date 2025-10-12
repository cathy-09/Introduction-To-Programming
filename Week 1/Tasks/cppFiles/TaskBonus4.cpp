#include <iostream>
#include <cmath> // за abs()
using namespace std;
int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double width = abs(x2 - x1);
    double height = abs(y2 - y1);
    double area = width * height;
    cout << area;
}