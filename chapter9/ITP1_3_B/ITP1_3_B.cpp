#include <iostream>
using namespace std;

int main()
{
    int x, n;
    n = 1;
    while (true)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        cout << "Case " << n << ": " << x << endl;
        n++;
    }
}