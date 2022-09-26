#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, c, d;
    long long int d1, d2;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        d1 = a * d;
        d2 = b * c;
        if (d1 == d2)
        {
            cout << "0" << endl;
        }
        else if (d1 == 0 || d2 == 0)
        {
            cout << "1" << endl;
        }
        else if (d1 < d2)
        {
            if (d2 % d1 != 0)
            {
                cout << "2" << endl;
            }
            else
                cout << "1" << endl;
        }
        else
        {
            if (d1 % d2 != 0)
            {
                cout << "2" << endl;
            }
            else
                cout << "1" << endl;
        }
    }
    return 0;
}