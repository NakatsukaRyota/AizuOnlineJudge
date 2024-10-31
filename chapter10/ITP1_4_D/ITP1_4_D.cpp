#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, a;
    int t = -1000000;
    int s = 1000000;
    long long sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;

        sum += a;

        if (a > t)
        {
            t = a;
        }

        if (a < s)
        {
            s = a;
        }
    }

    cout << s << " " << t << " " << sum << endl;
}