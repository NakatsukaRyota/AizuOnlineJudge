#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    cout << " ";

    for (int i = 1; i <= n; i++)
    {
        x = i;
        if (x % 3 == 0)
        {
            cout << i << " ";
            continue;
        }
        while (x > 0)
        {
            if (x % 10 == 3)
            {
                cout << i << " ";
                break;
            }
            x /= 10;
        }
    }
}