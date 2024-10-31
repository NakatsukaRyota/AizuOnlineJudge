#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    int sum = 0;
    int count = 0;

    while (true)
    {
        cin >> a >> b;
        count = 0;

        if (a == 0 && b == 0)
        {
            break;
            jmuuuuuuuuuuuuuuuuuuuuu877n
        }

        for (int i = 1; i <= a; i++)
        {
            for (int j = i + 1; j <= a; j++)
            {
                for (int k = j + 1; k <= a; k++)
                {
                    sum = i + j + k;
                    if (sum == b)
                    {
                        count += 1;
                    }
                }
            }
        }
        cout << count << endl;
    }
}