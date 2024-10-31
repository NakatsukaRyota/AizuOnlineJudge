#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
    string s;
    string t;

    cin >> s >> t;
    string S = s + s;

    if (S.find(t) != string::npos)
    {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}