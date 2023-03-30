#include <bits/stdc++.h>
#include <stdio.h>
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
    string s, sd, st1, smail, sy, sg, sdt;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s >> smail >> sy >> sg;
        sd = s.substr(0, 10);
        reverse(sd.begin(), sd.end());
        sdt = sd + s.substr(10, 19);

        cout << sdt; //<< smail << sy << sg << nl;
    }
    return 0;
}
