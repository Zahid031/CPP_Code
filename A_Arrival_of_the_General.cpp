#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[200], mx = 0, mn = 101, mn_i, mx_i;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            mx_i = i;
        }
        if (mn >= a[i])
        {
            mn_i = i;
            mn = a[i];
        }
    }
    if (mn_i < mx_i)
    {

        mn_i = (n - 1) - mn_i;
        cout << (mn_i + mx_i - 1) << endl;
    }
    else
    {

        mn_i = (n - 1) - mn_i;
        cout << (mn_i + mx_i) << endl;
    }

    return 0;
}