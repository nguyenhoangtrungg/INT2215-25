# include <iostream>
using namespace std;
void PLUS1 (int n) 
{
    n++;
    cout << &n << endl;
}
void PLUS2(int &n) 
{
    n++;
    cout << &n << endl;
}
int main()
{
    int a=5, b=5;
    cout << &a << endl;
    PLUS1(a);
    cout << &b << endl;
    PLUS2(b);
    return 0;
}