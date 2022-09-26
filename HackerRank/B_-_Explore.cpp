#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, n, m, t, sum=0, x, y, sum2 = 0;
    cin >> n >> m >> t;
    vector<int> v;
    for (int i = 0; i < n-1; i++)
    {
        cin >> a;
        v.push_back(a);
        sum = sum + a;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        sum2 = sum2 + y;
    }
    if (v[0] >= t)
        cout << "No" << '\n';
    else if ((sum2 + t) < sum)
        cout << "No" << '\n';
    else
        cout << "Yes" << endl;

    return 0;
}