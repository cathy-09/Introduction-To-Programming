//task 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int bigest = (a > b) ? a : b;
//	cout << "Bigest number is: " << bigest << endl;
//}

//task 2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cin >> a;
//	string evenOrOdd = (a % 2 == 0) ? "Even" : "Odd";
//	cout << "The number is: " << evenOrOdd << endl;
//}

//task 3
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int bigest = (a > b) ?
//		((a > c) ? a : c) :
//		((b > c) ? b : c);
//	cout << "Bigest number is: " << bigest << endl;
//}

//task 4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int month;	
//	cin >> month;
//	switch (month)
//	{
//	case 1:
//		cout << "31" << endl;
//		break;
//	case 2:
//		cout << "28" << endl;
//		break;
//	case 3:	
//		cout << "31" << endl;
//		break;
//	case 4:
//		cout << "30" << endl;
//		break;
//	case 5:
//		cout << "31" << endl;
//		break;
//	case 6:
//		cout << "30" << endl;
//		break;
//	case 7:
//		cout << "31" << endl;
//		break;
//	case 8:
//		cout << "31" << endl;
//		break;
//	case 9:
//		cout << "30" << endl;
//		break;
//	case 10:
//		cout << "31" << endl;
//		break;
//	case 11:
//		cout << "30" << endl;
//		break;
//	case 12:
//		cout << "31" << endl;
//		break;
//	default:
//		cout << "Invalid month" << endl;
//		break;
//	}
//}

//task 5
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int sum = 1;
//	for (int i = n; i <= m; i++)
//	{
//		sum *= i;
//	}
//	cout << sum << endl;
//}

//task 6
//#include <iostream>
//using namespace std;
//
//int daysInMonth(int month, int year)
//{
//    switch (month) {
//    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        return 31;
//    case 4: case 6: case 9: case 11:
//        return 30;
//    case 2:
//        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
//    default:
//        return 0;
//    }
//}
//
//int main()
//{
//    int date, month, year;
//    int nDays;
//    cin >> date >> month >> year;
//    cin >> nDays;
//
//    while (nDays > 0) {
//
//        int daysInMonthRemaining = daysInMonth(month, year);
//        int remaining = daysInMonthRemaining - date;
//
//        if (nDays <= remaining) {
//            date += nDays;
//            nDays = 0;
//        }
//        else {
//            nDays -= (remaining + 1);
//            date = 1;
//            month++;
//            if (month > 12) {
//                month = 1;
//                year++;
//            }
//        }
//    }
//
//    cout << date << " " << month << " " << year << endl;
//}

//multiplication table
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		for (int j = 1; j <= 10; j++)
//		{
//			cout << i * j << "\t";
//		}
//		cout << endl;
//	}
//}