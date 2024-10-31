#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    char op;

    cin >> a >> op >> b;

    while (true)
    {
        cin >> a >> op >> b;

        if (op == '+')
        {
            cout << a + b << endl;
        }
        if (op == '-')
        {
            cout << a - b << endl;
        }
        if (op == '*')
        {
            cout << a * b << endl;
        }
        if (op == '/')
        {
            cout << a / b << endl;
        }
        if (op == '?')
        {
            break;
        }
    }
}