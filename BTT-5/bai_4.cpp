# include <iostream>
using namespace std;
void passByReference1(string &s)
{
    s += 'a';
    cout << &s << endl;
}
void passByValue1(string s)
{
    s += 'a';
    cout << &s << endl;
}
void passByValue2(int a[])
{
    for (int i=0; i<3; i++){
        a[i] ++;
        cout << &a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[3]={1,1,1};
    string s = "123";
    for (int i=0; i<3; i++)
        cout << &a[i] << " ";
    cout << endl;
    passByValue2 (a);
    cout << &s << endl;
    passByValue1(s);
    passByReference1(s);
    return 0;
}