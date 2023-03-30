#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    multimap<int, int> mp;
    multimap<int, int>::iterator it;
    vi v1, v2;
    int n;
    cin >> n;
    int t = n;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        v1.push_back(h);
        v2.push_back(m);
        // mp.insert({h, m});
    }
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     // if(*i.first==*(i+1).first){

    //     cout << (it+1)->first << " " << it->second << nl;
    // }
    int c = 1,c1=1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v1[i] == v1[i + 1])
        {
            if (v2[i] == v2[i + 1])
            {
                c++;
            }
        }
        if (v1[i] != v1[i + 1]){
            if (v2[i] == v2[i + 1])
            c1++;
        }
    }
    cout << max(c,c1) << nl;

    return 0;
}