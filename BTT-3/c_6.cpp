#include<bits/stdc++.h>
#define NN 105
using namespace std;
int main(){
    int n, a[NN][NN];
    cin >> n;
    int u, v, cnt = 0;
    u = 1, v = n / 2 + 1;
    while(cnt != n*n){
        a[u][v] = ++cnt;
        int U = u-1, V = v+1;
        if(u == 1 && v == n){
            u += 1;
        }
        else if(U <= 0){
            u = n;
            v += 1;
        }
        else if(V > n){
            u -= 1;
            v = 1;
        }
        else if(!a[U][V]){
            u -= 1;
            v += 1;
        }
        else if(a[U][V]){
            u += 1;
        }
    }
    a[u][v] = ++cnt;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
}