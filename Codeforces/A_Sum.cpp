#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        if ((v[0] + v[1]) == v[2])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
            
            v.clear();
    }
}