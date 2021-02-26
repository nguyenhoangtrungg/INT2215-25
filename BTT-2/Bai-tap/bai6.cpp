#include<iostream>
#define NN 105
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n/2; i++) {
        for(int j = i; j <= n; j++) cout << j << ' ';
        for(int j = 1; j < i; j++) cout << j << ' ';
        cout << '\n';
    }
}

