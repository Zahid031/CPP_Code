#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {

        long long int n, a, i, j;
        vector<long long int> v;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        long long int min = count(v.begin(), v.end(), v[0]);
        long long int max = count(v.begin(), v.end(), v[n - 1]);

        if (v[0] == v[n - 1])
        {
            cout << ((n - 1) * n) << endl;
        }
        else
            cout << 2 * (min * max) << endl;
    }

    return 0;
}
