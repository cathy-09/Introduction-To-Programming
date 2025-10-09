#include <iostream>
using namespace std;
int main()
{
    char sybol;
    cin >> sybol;
    if (!(sybol == 'A'
        || sybol == 'E'
        || sybol == 'O'
        || sybol == 'I'
        || sybol == 'U'
        || sybol == 'a'
        || sybol == 'e'
        || sybol == 'o'
        || sybol == 'i'
        || sybol == 'u'))
    {
        cout << "" << false << "";
    }
    else
    {
        cout << "" << true << "";
    }
}