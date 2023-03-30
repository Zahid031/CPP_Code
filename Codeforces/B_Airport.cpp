#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int  main()
{
    ll n, m;
    cin >> n >> m;
    vector<int> v(m), v2;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    v2 = v;
    int maxsum = 0, minsum = 0;
    for (int i = 0; i < n; i++)
    {
        sort(v.begin(), v.end(), greater<int>());
        maxsum += v[0];
        v[0]--;
    }
    for (int i = 0; i < n; i++)
    {
        sort(v2.begin(), v2.end(), greater<int>());
        minsum += v2[v2.size() - 1];
        v2[v2.size() - 1]--;
        if (v2[v2.size() - 1] == 0)
            v2.pop_back();
    }
    cout << maxsum << " " << minsum;
    return 0;
}