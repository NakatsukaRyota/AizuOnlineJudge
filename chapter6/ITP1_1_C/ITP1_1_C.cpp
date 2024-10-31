#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int area, length;

    length = a * 2 + b * 2;
    area = a * b;
    cout << area << " " << length << endl;
}