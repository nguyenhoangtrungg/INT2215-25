#include<iostream>
#include<string>

using namespace std;

void swap_pointers(char* &x, char* &y)
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    char a[] = "I should print second";
    char b[] = "I should print first";
    char *s1 = a;
    char *s2 = b;
    char *p1, *p2;
    p1 = s1; p2 = s2;

    swap_pointers(p1, p2);

    cout << "s1 is " << p1 << endl;
    cout << "s2 is " << p2 << endl;

    return 0;
}
