#include <iostream>
using namespace std;
int main()
{
    long long seconds;
    cin >> seconds;
    long long days = seconds / 86400;
    seconds = seconds % 86400;
    long long hours = seconds / 3600;
    seconds = seconds % 3600;
    long long minutes = seconds / 60;
    seconds = seconds % 60;
    cout << "" << days << " ";
    cout << "" << hours << " ";
    cout << "" << minutes << " ";
    cout << "" << seconds << "";
}