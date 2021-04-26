#include<iostream>

using namespace std;

void Count(int *p, int n){
    int FAns = 0, SAns = 0;
    for(int i = 0; i < n; i++){
        if(*(p+i) % 2 == 0){
            FAns++;
        }
    }

    for(int i = n; i < 10; i++){
        if(*(p+i) % 2 == 0){
            SAns++;
        }
   }

    cout << FAns << " " << SAns;
}

int main(){
    int f[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    p = &f[0];

    Count(p, 5);

    return 0;
}
