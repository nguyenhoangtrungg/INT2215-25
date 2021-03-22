#include <bits/stdc++.h>
#define NN 10005
using namespace std;

int BSearchFirst(int x, int a[], int l, int r){
    if(r >= l){
        int mid = (l + r) / 2;
        if(a[mid] == x) return mid;
        if(a[mid] > x)
            return BSearchFirst(x,a,l,mid-1);
        if(a[mid] < x)
            return BSearchFirst(x,a,mid+1,r);
    }
    return -1;
}
int binarySearch(int a[], int n, int x) {
    int r = n - 1;
    int l = 0;
    while (r >= l) {
        int mid = (l + r) / 2;
        if (a[mid] == x)
          return mid;
        if (a[mid] > x)
          r = mid - 1;
        if (a[mid] < x)
          l = mid + 1;
        }
    return -1;
}
int main()
{
    ifstream cin("test.inp");
    int n, a[NN];
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    int x;
    cin >> x;
    int Ans = BSearchFirst(x,a,1,n);
    cout << Ans;
    return 0;
}
