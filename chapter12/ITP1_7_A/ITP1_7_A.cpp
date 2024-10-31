#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int m, f, r;
    int sum = 0;

    while (true)
    {
        cin >> m >> f >> r;
        sum = m + f;

        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }
        else if (m == -1 || f == -1 )
        {
            cout << "F" << endl;
        }
        else if (sum >= 80)
        {
            cout << "A" << endl;
        }
        else if (sum >= 65)
        {
            cout << "B" << endl;
        }
        else if (sum >= 50)
        {
            cout << "C" << endl;
        }
        else if (sum >= 30 && r >= 50)
        {
            cout << "C" << endl;
        }
        else if (sum >= 30)
        {
            cout << "D" << endl;
        }
        else 
        {
            cout << "F" << endl;
        }
    }
}