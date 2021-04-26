#include<iostream>

using namespace std;

int Length(char a[]){
    int len = 0;
    int i = 0;
    while(a[i] != '\0'){
        len++;
        i++;
    }
    return len;
}

void Reverse(char a[]){
    string blank = "";

    for(int i = str_len(a)-1; i >= 0; i--){
        blank = blank + a[i];
    }

    cout << blank << endl;
}

void Delete(char a[], char c){
    int n = str_len(a);
    int num = 0;

    for(int i = n-1; i >= 0; i--){
        if(a[i] == c){
            num++;
            for(int j = i; j < n-num; j++){
                a[j] = a[j+1];
            }
            for(int i = 0; i <= num; i++){
                a[n-i] = '\0';
            }
        }
    }

    cout << a << endl;
}

void PadRight(char a[], int n){
    int N = str_len(a);
    if(N < n){
        for(int i = N; i < n; i++){
            a[i] = '_';
        }
    }

    cout << a << endl;
}

void PadLeft(char a[], int n){
    int N = str_len(a);
    if(N < n){
        string b = "";
        for(int i = 0; i < N; i++){
            b = b + a[i];
        }
        for(int i = 0; i < n-N; i++){
            b = '_' + b;
        }

        cout << b << endl;
    }
    else{ cout << a << endl; }
}

void Truncate(char a[], int n){
    int N = str_len(a);
    if(N > n){
        a[n] = '\0';
        cout << a << endl;
    }
    else { cout << a << endl;}
}

bool Palindrome(char a[]){
    int n = str_len(a);
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-i-1])
            return 1;
    }
    return 0;
}

void TrimLeft(char a[]){
    int n = str_len(a);
    int num = 0;

    for(int i = n-1; i >= 0; i--){
        if(a[i] == ' '){
            num++;
            for(int j = i; j < n-num; j++){
                a[j] = a[j+1];
            }
            for(int i = 0; i <= num; i++){
                a[n-i] = '\0';
            }
        }
    }

    cout << a << endl;
}

void TrimRight(char a[]){
    int n = str_len(a);
    for(int i = 0; i < n; i++){
        if(a[i] == ' ')
            a[i] = '\0';
        break;
    }

    cout << a << endl;
}

int main()
{
	
}
