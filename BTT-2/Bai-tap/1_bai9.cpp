# include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    while(n)
    {
        int du = n%10;
        sum += du;
        n /= 10;
    }
    cout << sum;
    return 0;
}
