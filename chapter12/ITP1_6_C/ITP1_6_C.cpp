#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int n, x, y, z, r;
    cin >> n;

    vector<vector<vector<int>>> data(4, vector<vector<int>>(3, vector<int>(10, 0)));

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z >> r;
        x--;
        y--;
        z--;
        data.at(x).at(y).at(z) += r;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " " << data.at(i).at(j).at(k);
            }
            cout << endl;
        }
        if (i != 3)
        {
            cout << "####################" << endl;
        }
    }
}