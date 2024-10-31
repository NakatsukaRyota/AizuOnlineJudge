#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string W;
    string T;
    int sum = 0;
    cin >> W;
    for(int i = 0; i < W.size(); i++){
            W.at(i) = tolower(W.at(i));
        }

    while (true)
    {
        cin >> T;

        if (T == "END_OF_TEXT")
        {
            break;
        }

        for(int i = 0; i < T.size(); i++){
            T.at(i) = tolower(T.at(i));
        }

        if (T == W)
        {
            sum++;
        }
    }
    cout << sum << endl;
}