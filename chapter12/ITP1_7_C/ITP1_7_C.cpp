#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    vector<vector<int>> data(a + 1, vector<int>(b + 1));

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> data.at(i).at(j);
        }
    }

    for (int i = 0; i < a ; i++)
    {
        for (int j = 0; j < b; j++)
        {
            data.at(i).at(b) += data.at(i).at(j);
        }
    }

    for (int i = 0; i <= b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            data.at(a).at(i) += data.at(j).at(i);
        }
    }

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            cout << data.at(i).at(j);
            if(j != b){
                cout << " ";
            }
        }
        cout << endl;
    }
}