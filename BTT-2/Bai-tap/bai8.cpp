#include<iostream>
using namespace std;
int n;
long long minX, minY ;
int main(){
    minX = minY = 1e9;
    cin >> n;
    while(n--){
        long long a, b;
        cin >> a >> b;
        minX = min(minX,a);
        minY = min(minY,b);
    }
    cout << minX * minY;
}
