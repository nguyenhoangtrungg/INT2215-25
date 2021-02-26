# include <iostream>
# include <math.h>
using namespace std;
bool nto(int n)
{
    if(n<2) return 0;
    for (int i=2; i<= sqrt(n); i++)
        if (!(n%i)) return 0;
    return 1;
}
int main()
{
    int n;
    cin >> n;
    cout << boolalpha << nto(n);
    return 0;
}
