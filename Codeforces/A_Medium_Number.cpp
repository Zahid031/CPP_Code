#include <bits/stdc++.h>
using namespace std;

int main()
{
    //set<int> s;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        vector<int> v;

        cin >> a >> b >> c;
        
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());

        cout << v[1] << endl;
    }

    return 0;
}