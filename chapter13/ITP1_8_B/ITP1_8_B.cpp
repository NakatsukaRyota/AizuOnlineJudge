#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
    string num;

    while (true)
    {
        int sum = 0;
        cin >> num;
        if (num == "0")
        {
            break;
        }
        for (int i = 0; i < num.size(); i++)
        {
            int a = int(num.at(i)) - int('0');
            sum += a;
        }
        cout << sum << endl;
    }
}