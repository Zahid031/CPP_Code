#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, x, y, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x >> y >> d;
        if ((x-d>1 && y+d<m) || (y-d>1 && x+d<n))
            cout << (m + n) - 2 << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}