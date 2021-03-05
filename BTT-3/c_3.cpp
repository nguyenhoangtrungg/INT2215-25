#include<bits/stdc++.h>
using namespace std;
bool DoiXuongGuong(int u){
    int U = u, DaoU = 0;
    while(U){
        DaoU = DaoU*10 + U%10;
        U/=10;
    }
    if(u == DaoU) return 1;
    return 0;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int A, B, ans = 0;
        cin >> A >> B;
        for(int i = A; i <= B; i++){
            if(DoiXuongGuong(i)) ans++; 
        }
        cout << ans << endl;
    }
}