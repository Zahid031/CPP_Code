#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    if (b == 1)
        cout << "1" << endl;
    else if (a % 2 == 0)
    {
        if (b > 1 && b <= a / 2)
        {
            cout << (b * 2) - 1 << endl;
        }
        else
            cout << b - (a - b) << endl;
    }
    else
    {
        if (b <= (a / 2) + 1)
        {
            cout << (b * 2) - 1 << endl;
        }
        else
            cout << b - (a + 1 - b) << endl;
    }

    return 0;
}