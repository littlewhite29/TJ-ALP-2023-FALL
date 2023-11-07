#include <iostream>
using namespace std;

void f1()
{
    int a = 1;
    a++;
    cout << "a=" << a << ' ' << &a << endl;

    static int b = 1;
    b++;
    cout << "b=" << b << ' ' << &b << endl;
}
int main()
{
    f1();
    f1();
    f1();
    return 0;
}
