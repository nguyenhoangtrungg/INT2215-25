# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if(delta>0)
    {
        cout << (-b-sqrt(delta))/(2*a) << ' ' << (-b+sqrt(delta))/(2*a);
    }
    else if(delta==0) cout << -b/(2*a);
    else
    {
        cout << -b/(2*a) << " + " << abs(sqrt(-delta)/(2*a)) << "i\n";
        cout << ' ' << -b/(2*a) << " - " << abs(sqrt(-delta)/(2*a)) << "i";
    }
    return 0;
}
