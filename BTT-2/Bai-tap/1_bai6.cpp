#include<iostream>
#include<math.h>
using namespace std;
int ucln(int u, int v){
    if(v == 0) return u;
    if(v == 1) return v;
    if(u == v) return u;
    return ucln(v, u % v);
}
int main(){
    int u, v;
    cin >> u >> v;
    cout << ucln(u,v);
}

