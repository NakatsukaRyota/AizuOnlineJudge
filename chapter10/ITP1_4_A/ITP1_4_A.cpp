#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b, d, r;
    double A, B, f;

    cin >> a >> b;
    A = (double)a;
    B = (double)b;

    d = a / b;
    r = a % b;
    f = A / B;

    printf("%d %d %.6f\n", d, r, f);
}