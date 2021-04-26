 #include<iostream>


using namespace std;

int GetSize(int *p){
    int n = sizeof(p);

    return n;
}

int main(){
    int f[12];
    int *p;

    p = f;

    cout << sizeof(f) << endl;
    cout << GetSize(f);

    return 0;
}
