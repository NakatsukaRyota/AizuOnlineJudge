#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string t_card, h_card;
    int t_sum = 0;
    int h_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t_card >> h_card;

        if (t_card > h_card)
        {
            t_sum += 3;
        } else if (t_card == h_card){
            t_sum ++;
            h_sum ++;
        } else {
            h_sum +=3;
        }
    }
    cout << t_sum << " " << h_sum << endl;
}