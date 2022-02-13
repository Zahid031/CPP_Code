#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, T, a, b, c;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c;
        if (a == b && b == c && c == a && a % 2 == 0)
            cout << " yes" << endl;
        else if (a == b && c % 2 == 0)
            cout << " yes" << endl;
        else if (b == c && a % 2 == 0)
            cout << " yes" << endl;
        else if (c == a && b % 2 == 0)
            cout << " yes" << endl;
    }
}