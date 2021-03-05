#include<bits/stdc++.h>
#define NN 105
using namespace std;
const int dx[] = {-1,-1,-1,0,0,1,1,1};
const int dy[] = {-1,0,1,-1,1,-1,0,1};
char a[NN][NN];
int XungQuanh(int u, int v){
    if(a[u][v] == '*') return 0;
    int ans = 0;
    for(int i = 0; i < 8; i++){
        int U = u + dx[i];
        int V = v + dy[i];
        if(a[U][V] == '*') ans++;
    }
    return ++ans;
}
int main(){
    ifstream cin("a.inp.txt");
    int m, n, Ans[NN][NN];
    memset(a,0,sizeof(a));
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++) Ans[i][j] = XungQuanh(i,j);
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++)
            if(Ans[i][j]) cout << --Ans[i][j] <<' ';
            else cout << "* ";
        cout << endl;
    }
    return 0;
}