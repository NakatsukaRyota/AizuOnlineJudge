#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int n, d;
    char S;
    cin >> n;

    vector<vector<int>> data(4, vector<int>(13, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> S >> d;
        if (S == 'S')
        {
            data.at(0).at(d - 1) = 1;
        }
        else if (S == 'H')
        {
            data.at(1).at(d - 1) = 1;
        }
        else if (S == 'C')
        {
            data.at(2).at(d - 1) = 1;
        }
        else if (S == 'D')
        {
            data.at(3).at(d - 1) = 1;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (i == 0 && data.at(i).at(j) == 0)
            {
                cout << 'S' << ' ' << j + 1 << endl;
            }
            else if (i == 1 && data.at(i).at(j) == 0)
            {
                cout << 'H' << ' ' << j + 1 << endl;
            }
            else if (i == 2 && data.at(i).at(j) == 0)
            {
                cout << 'C' << ' ' << j + 1 << endl;
            }
            else if (i == 3 && data.at(i).at(j) == 0)
            {
                cout << 'D' << ' ' << j + 1 << endl;
            }
        }
    }
}