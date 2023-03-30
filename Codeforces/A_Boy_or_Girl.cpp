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
    string s;
    cin >> s;
    si s1;
    for (int i = 0; i < s.length(); i++)
    {
        s1.insert(s[i]);
    }
    int l = s1.size();
    if (l % 2 == 0)
        cout << "CHAT WITH HER!" << nl;
    else
        cout << "IGNORE HIM!" << nl;

    return 0;
}