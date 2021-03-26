#include<iostream>
#include<math.h>

#define NN 1005

using namespace std;

int k, dem = 0;

void Xuat(int a[], int n){
    //cout << ++dem << ' ' << k << "\n\n";
    int _n = n + 1;
    if(k == n + 1){
        while(_n--){
            for(int i = 1; i <= k - 1; i++) cout << a[i] << ' ';
            cout << n + 1 << ' ';
            for(int i = k; i <= n; i++) cout << a[i] << ' ';
            k--;
            cout << endl;
        }
    }
    else if(k == 0){
        k++;
        while(_n--){
            for(int i = 1; i <= k - 1; i++) cout << a[i] << ' ';
            cout << n + 1 << ' ';
            for(int i = k; i <= n; i++) cout << a[i] << ' ';
            k++;
            cout << endl;
        }
        k--;
    }
    cout << endl;
}

/*void Xuat(int a[], int n){
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}*/

void HoanVi(int u, int n, int a[], int dd[]){
    if(u == n + 1) {
        /*if(k == 1) k = n;
        else k = 1;*/
        Xuat(a,n);
    }
    else{
        for(int i = 1; i <= n; i++){
            if(!dd[i]){
                dd[i] = 1;
                a[u] = i;
                HoanVi(u+1,n,a,dd);
                dd[i] = 0;
                a[u] = 0;
            }
        }
    }
}

int main(){
    int n, a[NN], dd[NN];
    cin >> n;
    k = n;
    for(int i = 1; i <= n + 5; i++) dd[i] = 0;
    HoanVi(1,n-1,a,dd);
}
