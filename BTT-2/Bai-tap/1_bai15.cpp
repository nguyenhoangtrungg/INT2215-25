#include<iostream>
#include<math.h>
using namespace std;
int fib(int n)
{
    if(n==1 || n==0 || n==2 || n==3) return n;
    return fib(n-2)+fib(n-1);
}
int n;
bool Check = 0;
int main()
{
    cin >> n;
    for(int i=0 ; i<=n ; i++)
       if(n == fib(i)) {
            cout << "Yes\n";
            Check = 1;
            break;
       }
    if(!Check) cout <<"No\n";
    for(int i = 0 ; i<=n ; i++) {
        int x = fib(i);
        if(x == 0) ++x;
        if(x > n) break;
        cout << x << ' ';
    }
   return 0;
}
