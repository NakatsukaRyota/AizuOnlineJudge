#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int x, y;
    int a, b, c, d, e;

    cin >> x >> y;

    vector<vector<int>> data(x, vector<int>(y));

    for (int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++){
            cin >> data.at(i).at(j);
        }
    }
    vector<int> arr(y);
    for (int k = 0; k < y; k++)
    {
        cin >> e;
        arr.at(k) = e;
    }
    vector<int> arr2(x);
    int sum;
    for (int l = 0; l < x; l++)
    {
        sum = 0;
        for (int m = 0; m < y; m++)
        {
            sum += data.at(l).at(m) * arr.at(m);
        }
        arr2.at(l) = sum;
    }
    for (int n = 0; n < x; n++)
    {
        cout << arr2.at(n) << endl;
    }
}