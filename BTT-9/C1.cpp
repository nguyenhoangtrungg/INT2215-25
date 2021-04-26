#include<iostream>
#include<cstring>
using namespace std;

char* Reverse(const char* a){
    int n = strlen(a);
    char* p = new char [n];

    for(int i = 0; i <= n - 1; i++)
        p[i] = a[n - i - 1];

    return p;
}

char* Delete(const char* a, const char* c){
    int n = strlen(a), j = 0, check = 0;
    char* p = new char [n];

    for(int i = 0; i < n; i++){
        if(a[i] != c[0]){
            p[j] = a[i];
            j++;
        }
        else check++;
    }
    p[n-check] = '\0';

    return p;
}

char* PadRight(const char* a, int n){
    int N = strlen(a);
    char* p = new char [max(N, n)];

    for(int i = 0; i < n; i++){
        p[i] = a[i];
    }

    if(N < n){
        for(int i = N; i < n; i++){
            p[i] = '_';
        }
    }

    return p;
}

char* PadLeft(const char* a, int n){
    int N = strlen(a);
    char* p = new char [max(N, n)];
    if(N < n){
        for(int i = 0; i < n - N; i++){
            p[i] = '_';
        }
        int j = 0;
        for(int i = n - N; i < n; i++){
            p[i] = a[j];
            j++;
        }
    }
    else{
        for(int i = 0; i < N; i++)
            p[i] = a[i];
    }

    return p;
}

char* Truncate(const char* a, int n){
    int N = strlen(a);
    char* p = new char [min(N, n)];
    for(int i = 0; i < min(N, n); i++){
        p[i] = a[i];
    }

    return p;
}

bool Palindrome(char a[]){
    int n = strlen(a);
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-i-1])
            return 1;
    }
    return 0;
}

char* TrimLeft(const char* a){
    int n = strlen(a);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != ' '){
            j = i;
            break;
        }
    }

    char* p = new char [n - j - 1];
    for(int i = j; i < n; i++){
        p[i - j] = a[i];
    }

    return p;
}

char* TrimRight(const char* a){
    int n = strlen(a);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == ' '){
            j = i - 1;
            break;
        }
    }

    char* p = new char [j];
    for(int i = 0; i <= j; i++){
        p[i] = a[i];
    }

    return p;
}

int main()
{

}
