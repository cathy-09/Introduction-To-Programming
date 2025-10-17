//task 1
//#include <iostream>
//using namespace std;
//int main()
//{
//  int a, b;
//  cin >> a >> b;
//	if (a > b)
//	{
//		cout << "" << a << "";
//	}
//	else
//	{
//		cout << "" << b << "";
//	}
//}

//#include <iostream>
//using namespace std;
//int main() {
//    double a, b;
//    cin >> a >> b;
//    if (b == 0) 
//    {
//        cout << "You cannot divide by 0.";
//        return 0;
//    }
//    double addition = a + b;
//    double subtraction = a - b;
//    double multiplication = a * b;
//    double division = a / b;
//    double maxResult = addition;
//    if (subtraction > maxResult)
//    {
//        maxResult = subtraction;
//    }
//    if (multiplication > maxResult)
//    {
//        maxResult = multiplication;
//    }
//    if (division > maxResult)
//    {
//        maxResult = division;
//    }
//    cout << "" << maxResult << "";
//}

//task 2
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	const double epsilon = 0.0000002;
//	double r, x, y, x1, y1;
//	cin >> x >> y >> r >> x1 >> y1;
//	double distance =sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
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

//task 3
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//    const double epsilon = 0.0000002;
//    double x1, y1, r1, x2, y2, r2;
//    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//    if (fabs(d) < epsilon && fabs(r1 - r2) < epsilon)
//    {
//        cout << "Matching";
//    }
////    Външно допиращи се
//    else if (fabs(d - (r1 + r2)) < epsilon)
//    {
//        cout << "Externally touching";
//    }
////    Вътрешно допиращи се
//    else if (fabs(d - fabs(r1 - r2)) < epsilon)
//    {
//        cout << "Internally touching";
//    }
////    Взаимно отдалечени
//    else if (d > r1 + r2)
//    {
//        cout << "Mutually distant";
//    }
//    else if (d < fabs(r1 - r2))
//    {
//        cout << "One is inside the other.";
//    }
//    else
//    {
//        cout << "Intersecting";
//    }
//
//    return 0;
//}

//task 4
// да се напише програма която по координатите на два правоъгълника (горен ляв ъгъл и долен десен ъгъл) и намира площта на сечението им
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	const double epsilon = 0.0000002;
//	double x1_1, y1_1, x2_1, y2_1, x1_2, y2_2, x2_2, y2_1;
//	cin >> x1_1 >> y1_1 >> x2_1 >> y2_1 >> x1_2 >> y2_2 >> x2_2 >> y2_1;
//}