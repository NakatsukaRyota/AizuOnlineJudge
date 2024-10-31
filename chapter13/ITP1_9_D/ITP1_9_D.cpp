#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str, str1, str2, str3, order;
    int n, a, b;

    cin >> str;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> order;
        if (order == "replace")
        {
            cin >> a >> b >> str1;
            str.replace(a, b + 1 - a, str1);
            cout << str << endl;
        }
        else if (order == "reverse")
        {
            cin >> a >> b;
            str2 = str.substr(a, b + 1 - a);
            reverse(str2.begin(), str2.begin());

            str = str.replace(a, b + 1 - a, str2);
            cout << str << endl;
        }
        else if (order == "print")
        {
            cin >> a >> b;
            str3 = str.substr(a, b + 1 - a);
            cout << str3 << endl;
        }
    }
}