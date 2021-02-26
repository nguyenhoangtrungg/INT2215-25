# include <iostream>
using namespace std;
int main()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int D = a1*b2 - a2*b1;
    int Dx = c1*b2 - c2*b1;
    int Dy = a1*c2 - a2*c1;
    if (D) cout << 1.0*Dx/D <<' '<<1.0*Dy/D;
    else
    {
        if(Dx!=0 || Dy!=0) cout << "He vo nghiem";
        if(Dx==0 && Dy==0) cout << "He co vo so nghiem";
    }
    return 0;
}
