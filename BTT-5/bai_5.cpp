# include <iostream>
using namespace std;
int main()
{
    int a = 10, b =5;
    int &ref1 = a;
    cout << &a << " " << &ref1 << endl;
    ref1 = b;
    cout << &ref1 << " " << &b << endl;
    return 0;
}