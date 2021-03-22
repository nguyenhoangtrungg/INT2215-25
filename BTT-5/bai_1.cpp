# include <iostream>
using namespace std;
int main ()
{
    int a[3];
    char b[3];
    for (int i=0; i<3; i++)
        cout << &a[i] << " ";
    cout << endl;
    for (int i=0; i<3; i++)
        cout << (void*)&b[i] << " ";
    return 0;
}

