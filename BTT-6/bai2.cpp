#include<iostream>
#include<math.h>
#include<iomanip>
#include<cstring>
#include<string>
#include<vector>

#define pb push_back
#define NN 100005

using namespace std;

int dd[NN];
vector<char> a;

void HoanVi(int u, int k, int n){
    if(u == k){
        for(int i = 0; i < a.size(); i++) cout << a[i];
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!dd[i]){
            dd[i] = 1;
            a.pb(char('A' + i - 1));
            HoanVi(u+1,k,n);
            dd[i] = 0;
            a.pop_back();
        }
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    memset(dd,0,sizeof(dd));
    HoanVi(0,k,n);    
}