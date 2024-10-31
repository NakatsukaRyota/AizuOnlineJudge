#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
    char c;
    while (true)
    {
        scanf("%c", &c);
        if (c == '\n')
        {
            cout << endl;
            break;
        }

        if (isalpha(c))
        {
            if (islower(c))
            {
                printf("%c", toupper(c));
            }
            else if (isupper(c))
            {
                printf("%c", tolower(c));
            }
        }
    }
    else
    {
        cout << c;
    }
}
return 0;
}