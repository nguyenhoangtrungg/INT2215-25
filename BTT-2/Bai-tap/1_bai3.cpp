#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b>c && b+c>a && c+a>b)
    {
        cout << a+b+c << endl;
        if (a==b && b==c) cout << "Tam giac deu";
        else if (a==b || b==c || c==a) cout << "Tam giac can";
        else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) cout << "Tam giac vuong";
        else cout << "Tam giac thuong";
    }
    else cout << "Khong phai la tam giac";
    return 0;
}
