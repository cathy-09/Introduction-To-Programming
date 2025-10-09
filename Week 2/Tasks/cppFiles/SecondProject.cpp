//task 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int theBigest = 0;
//	if (a > b && a > c)
//	{
//		theBigest = a;
//	}
//	else if (b > a && b > c)
//	{
//		theBigest = b;
//	}
//	else
//	{
//		theBigest = c;
//	}
//	cout << "" << theBigest << "";
//}

//task 2
//#include <iostream>
//using namespace std;
//int main() 
//{
//	char sybol;
//	cin >> sybol;
//	cout << "" << ((sybol >= 'a' && sybol <= 'z') ? true : false) << "";
//}

//task 3
//#include <iostream>
//using namespace std;
//int main() 
//{
//	char sybol;
//	cin >> sybol;
//	if (sybol >= 'a' && sybol <= 'z')
//	{
//		cout << "" << (char)(sybol - 'a' + 'A') << "";
//	}
//	else if (sybol >= 'a' && sybol <= 'z')
//	{
//		cout << "" << (char)(sybol - 'A' + 'a') << "";
//	}
//	else
//	{
//		cout << "Invalid!";
//	}
//}

//task 4
//#include <iostream>
//using namespace std;
//int main()
//{
//	double x1, y1, x2, y2, x, y;
//	cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
//	if (x > x1
//		&& x < x2
//		&& y > y1
//		&& y < y2)
//	{
//		cout << "Inside";
//	}
//	else if ((x == x1 || x == x2)
//		&& (y <= y1 && y >= y2)
//		|| (y == y1 || y == y2)
//		&& (x >= x1 && x <= x2))
//	{
//		cout << "On the border";
//	}
//	else
//	{
//		cout << "Outside";
//	}
//}

//task 5
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	const double epsilon = 0.0002;
//	double r, x, y;
//	cin >> r >> x >> y;
//	double distance = sqrt(pow(x, 2) + pow(y, 2));
//	if (fabs(distance - r) < epsilon)
//	{
//		cout << "On the border";
//	}
//	else if (distance < r)
//	{
//		cout << "Inside";
//	}
//	else
//	{
//		cout << "Outside";
//	}
//}
