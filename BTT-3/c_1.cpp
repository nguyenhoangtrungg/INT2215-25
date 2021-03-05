#include<bits/stdc++.h>
#define NN 1000005
using namespace std;

int main(){
    int n;
    bool  dd[NN];
    memset(dd,0,sizeof(dd));
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(dd[x]) {
            cout << "Yes";
            return 0;
        }
        dd[x] = 1;
    }
    cout << "No";
    return 0;
}
