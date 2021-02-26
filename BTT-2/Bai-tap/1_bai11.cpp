#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int Min, Max, StepSize;
    cin >> Min >> Max >> StepSize;
    for (int i=Min; i<=Max; i += StepSize)
    {
        double doC, doK;
        doC = (i*1.0 - 32)*5/9;
        doK = doC + 273.15;
        cout << fixed << setprecision(2) <<  i << " " << doC << " " << doK << endl;
    }
    return 0;
}
