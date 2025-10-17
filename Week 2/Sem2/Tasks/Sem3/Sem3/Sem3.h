#pragma once

int main()
{
	int a;
	cin >> a;
	char bigest = (a % 2 == 0) ? "Even" : "Odd";
	cout << "Bigest number is: " << bigest << endl;
}
