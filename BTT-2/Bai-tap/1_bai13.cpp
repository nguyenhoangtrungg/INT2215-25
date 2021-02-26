#include <iostream>
#include <cmath>
bool soNguyenTo(int n)
{
    if(n < 2) return 0;
    for(int i =2 ; i <= sqrt(n); i++)
        if(!(n % i)) return 0;
    return 1;
}
bool soChinhPhuong(int n)
{
    int N = sqrt(n);
    if(N * N==n) return 1;
    return 0;
}
bool soHoanHao(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i==0) sum += i;
    }
    if(sum == n) return 1;
    return 0;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=2; i<=n; i++)
        if (soChinhPhuong(i)) cout << i << " ";
    cout << endl;
    for (int i=2; i<=n; i++)
        if (soNguyenTo(i)) cout << i << " ";
    cout << endl;
    for (int i=2; i<=n; i++)
        if (soHoanHao(i)) cout << i << " ";
    return 0;
}
