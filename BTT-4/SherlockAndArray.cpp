#include<bits/stdc++.h>
#define NN 100005
using namespace std;
int T, a[NN], TongTienTo[NN];
bool TonTai;
void KhoiTao(){
    memset(a,0,sizeof(a));
    memset(TongTienTo,0,sizeof(TongTienTo));
    TonTai = 0;
}
int main(){
    //ifstream cin("a.inp.txt");
    cin >> T;
    while(T--){
        int n;
        KhoiTao();
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) TongTienTo[i] = TongTienTo[i-1] + a[i];
        for(int i = 1; i <= n; i++)
            if(TongTienTo[i] == TongTienTo[n] - TongTienTo[i-1]) {
                TonTai = 1;
                continue;
            }
        if(!TonTai) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}