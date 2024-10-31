#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double r, pi, cir, area;
    scanf("%lf", &r);

    pi = 3.141592653589;

    area = r * r * pi;
    cir = 2 * pi * r;

    printf("%.6f %.6f\n", area, cir);
}