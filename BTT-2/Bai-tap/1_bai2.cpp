#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x ,y;
    int k = 1;
    cin >> x >> y;
    for (int i = 1; i <= y; i++) k *= x;
    cout << k << endl;
    cout << pow(x,y);
    return 0;
}
