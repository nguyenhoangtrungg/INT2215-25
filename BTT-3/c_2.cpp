#include<bits/stdc++.h>
#define NN 1000005
using namespace std;

int main(){
    string s;
    cin >> s;   
    for(int i = 0; i < s.size()/2; i++){
        int I = s.size() - 1 - i;
        if(s[i] != s[I]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
