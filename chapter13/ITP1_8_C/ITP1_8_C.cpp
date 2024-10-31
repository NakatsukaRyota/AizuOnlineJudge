#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
    vector<int> data(128, 0);

    char ch;
    while (cin >> ch)
    {
        if (isalpha(ch))
        {
            int num = int(ch);
            data.at(num)++;
        }
    }

    for (int i = 97; i <= 122; i++)
    {
        cout << char(i) << " : " << data.at(i) + data.at(i - 32) << endl;
    }
}