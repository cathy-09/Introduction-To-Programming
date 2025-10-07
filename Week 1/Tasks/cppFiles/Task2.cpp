#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int remainder = a % b;
    int quotient = a / b;
    cout << "" << quotient << " ";
    cout << "" << remainder << "";
}