#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double tongDiem = 0, tongHeSo = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        double diem, heso;
        cout << "Diem mon hoc " << i << ": ";
        cin >> diem;
        while(diem < 0 || diem > 10)
        {
            cout << "Nhap lai diem mon hoc " << i << "(trong khoang tu 0,0...10,0): ";
            cin >> diem;
        }
        cout << "He so mon hoc " << i << ": ";
        cin >> heso ;
        tongDiem += diem*heso;
        tongHeSo += heso;
    }
    cout << "====================\n";
    cout << "Tong so he so: " << tongHeSo << endl;
    cout << fixed << setprecision(2) << "Diem trung binh cua " << n << " mon hoc: " << tongDiem / tongHeSo;
    return 0;
}
