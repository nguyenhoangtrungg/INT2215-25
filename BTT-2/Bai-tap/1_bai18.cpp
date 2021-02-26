# include <iostream>
using namespace std;
int main()
{
    int n, cnt = 1, sum = 0;
        cout << "Diem mon hoc " << cnt << ": ";
        cin >> n;
    while (n >= 0)
    {
        if(n >= 0 && n <= 10)
        {
            sum += n;
            cnt++;
            cout << "Diem mon hoc " << cnt << ": ";
            cin  >> n;
        }
        else
        {
            cout << "Nhap lai diem mon hoc " << cnt << "(trong khoang tu 0...10): ";
            cin >> n;
        }
    }
    cnt--;
    cout << "So mon hoc: " << cnt << endl;
    cout << "Diem trung binh cua " << cnt << " mon hoc: " << sum*1.0/cnt;
    return 0;
}
