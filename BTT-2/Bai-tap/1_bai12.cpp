# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int N = sqrt(n);
    if(N*N == n) cout << "Yes";
    else cout << "No";
    return 0;
}
