#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c;

    for (int i = a; i < b; i++)
    {
        if (i % b == 0)
        {
            n++;
        }
    }
    cout << n << endl;
}