# include <iostream>
using namespace std;
int giaithua (int n)
{
    cout << "n= " << n << " at " << &n << endl;
    if(n==0) return 1;
    return n*giaithua(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << giaithua(n);
    return 0;
}