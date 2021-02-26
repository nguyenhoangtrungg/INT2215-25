# include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    int y = year -(14-month)/12;
    int x = y + y/4 - y/100 +y/400;
    int m = month +12 *((14-month)/12)-2;
    int d = (day + x +31*m/12)%7;
    switch(d)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 0:
        cout << "Sunday";
        break;
    }
    return 0;
}
