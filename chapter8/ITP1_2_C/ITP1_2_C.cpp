#include <iostream>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> a >> b >> c;

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    if (b > c)
    {
        t = c;
        c = b;
        b = t;
    }

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    cout << a << " " << b << " " << c << endl;
}