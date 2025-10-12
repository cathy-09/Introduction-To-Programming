#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double slowerSpeed, fasterSpeed, initialDistance;
    cin >> slowerSpeed >> fasterSpeed >> initialDistance;
    if (fasterSpeed <= slowerSpeed)
    {
        cout << "Never.";
    }
    else
    {
        double timeToCatch = initialDistance / (fasterSpeed - slowerSpeed);
        cout << "" << timeToCatch << "";
    }
}