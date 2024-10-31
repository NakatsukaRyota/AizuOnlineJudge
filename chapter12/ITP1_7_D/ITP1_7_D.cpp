#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int n, m, l;

    cin >> n >> m >> l;

    vector<vector<long long>> mat_1(n, vector<long long>(m));

    vector<vector<long long long>> mat_2(m, vector<long long>(l));

    vector<vector<long long>> mat_3(n, vector<long long>(l));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat_1.at(i).at(j);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> mat_2.at(i).at(j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < m; k++)
            {
                mat_3.at(i).at(j) += mat_1.at(i).at(k) * mat_2.at(k).at(j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << mat_3.at(i).at(j);
            if (j != l - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}