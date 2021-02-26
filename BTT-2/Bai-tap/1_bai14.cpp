# include <iostream>
using namespace std;
int main ()
{
    int n;
    double x;
    cin >> n;
    double Max = -1e9*1.0, Min = 1e9*1.0;
    for (int i=1; i<=n; i++)
    {
        cin >> x;
        Max = max(Max,x);
        Min = min(Min,x);
    }
    cout << Max << ' ' << Min;
    return 0;
}
