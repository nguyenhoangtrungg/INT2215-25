#include<iostream>
#include<string>
#include<math.h>
#define NN 1005
using namespace std;

bool Cmp(string s, string x){
    string X = "";
    for(int i = 0; i < x.size(); i++) X = x[i] + X;
    return (X == s ? 1 : 0);
}

int main(){
    int n;
    string s[NN];
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> s[i];

    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            if(Cmp(s[i],s[j])) {
                cout << s[i].size() <<' '<< s[i][s[i].size()/2];
            }
}