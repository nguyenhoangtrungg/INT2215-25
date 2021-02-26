# include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    while (n != -1)
    {
        if (n%5==0) cout << n/5 << endl;
        else cout << -1 << endl;
        cin >> n;
    }
    cout << "-1 \nbye";
    return 0;

}
