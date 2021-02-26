# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    int a[4];
    for (int i=0; i<=4; i++)
        cin >> a[i];
    sort (a,a+5);
    cout << a[2];
    return 0;
}
