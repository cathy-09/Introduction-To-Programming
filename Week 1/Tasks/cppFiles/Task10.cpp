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
    cout << "" << reversed << "";
}



#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short  a, thousands = 0, hundreds = 0, tens = 0, units = 0, reversed = 0;
    cin >> a;
	thousands = a / 1000;
	hundreds = (a / 100) % 10;
	tens = (a / 10) % 10;
	units = a % 10;
	reversed = units * 1000 + tens * 100 + hundreds * 10 + thousands;
    cout << "" << reversed << "";
}
