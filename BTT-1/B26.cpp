# include <iostream>
# include <algorithm>

using namespace std;
int main()
{
    int n, a[100], sum=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum*1.0/n << endl;

    sort (a,a+n);
    cout << a[n-1] << endl << a[0];
    return 0;
}
