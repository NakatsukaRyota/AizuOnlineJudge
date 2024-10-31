#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << vec.at(i);
        if (i != 0)
        {
            cout << " ";
        }
    }
    cout << endl;
}