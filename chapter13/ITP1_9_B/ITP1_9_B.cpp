#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str;
    int n, m;
    while (true)
    {
        cin >> str;
        if (str == "-")
        {
            break;
        }
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            string str2 = str.substr(0, m);
            string str1 = str.substr(m, str.size());
            str = str1 + str2;
        }
        cout << str << endl;
    }
}