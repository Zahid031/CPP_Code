#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        vi v;
        vector<char>v1;
        int n, a;
        cin >> n;
        string s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for(int j=0; j<s.size(); j++){
            
                if (s[j] == '1')
                    c++;}
            if (c > 0)
                v.push_back(c);
            c = 0;
        }

        if (v[0] == v[1])
            cout << "SQUARE" << nl;
        else
            cout << "TRIANGLE" << nl;

        v.clear();
    }

    return 0;
}
