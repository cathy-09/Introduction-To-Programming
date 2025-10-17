#include <iostream>
using namespace std;
int main()
{
	char sybolsAlphabet;
	cin >> sybolsAlphabet;
	if (!((sybolsAlphabet >= 'A' && sybolsAlphabet <= 'Z')
		|| (sybolsAlphabet >= 'a' && sybolsAlphabet <= 'z')))
	{
		cout << "Invalid input!";
		return 0;
	}
	else
	{
		switch (sybolsAlphabet)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << "vowel";
			break;
		default:
			cout << "consonant";
			break;
		}
	}
}
