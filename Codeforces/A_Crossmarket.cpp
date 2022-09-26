#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, r, c;
    cin >> t;
    while (t--)
    {
        int min;
        cin >> r >> c;
        {
            if (r > c)
            {
                min = c;
            }
            else
                min = r;
        }
        if (c == 1 && r == 1)
        {
            cout << "0" << endl;
        }
        else
            cout << r + c + min - 2 << endl;
    }
    return 0;
}