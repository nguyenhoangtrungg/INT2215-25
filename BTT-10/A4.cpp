#include<iostream>

using namespace std;


struct Point{
    int x;
    int y;
};

void get_address(Point a){
    cout << "address of point: " << &a << endl
         << "address of x: " << &a.x << endl
         << "address of y: " << &a.y;
}

int main(){
    Point a;
    a.x = 1; a.y = 2;
    get_address(a);

    return 0;
}
