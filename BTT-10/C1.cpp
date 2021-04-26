#include <bits/stdc++.h>

using namespace std;

struct String
{
    int n;
    char *str;
    String()
    {
        n = 0;
        //str = new char;
    };
    String(const char* _str)
    {
        n = strlen(_str);
        str = new char(strlen(_str));
        for(int i = 0; i < n; i++) str[i] = _str[i];
    };
    ~String()
    {
        n = 0;
        delete str;
    };

    void print()
    {
        cout << str;
    }
    void append(const char* str_)
    {
        int cnt = 0;
        int N = n + strlen(str_);
        char *temp = new char(N);
        for(int i = 0; i < n; i++) temp[i] = str[i];
        for(int i = n; i < N; i++) temp[i] = str_[i-n];
        str = new char(N);
        n = N;
        for(int i = 0; i < N; i++) str[i] = temp[i];
    }
};

int main()
{
    String tess("Hello");
    tess.print();
    cout << endl;
    tess.append(" there");
    tess.print();
    return 0;
}