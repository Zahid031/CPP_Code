#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t, a, x,l;
    vector<int> v;
    cin >> t;
    while (t--)
    {
        l=0;
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        l=v.size();
        cout << v[l - 1] + v[l - 2] - v[0] - v[1] << endl;
        v.clear();
    }
    return 0;
}