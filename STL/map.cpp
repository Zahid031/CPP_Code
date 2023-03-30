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
    string s; //= "ZAHIDZAHID";
    vector<string> s2(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> s2[i];
       // s2.push_back(s);
    }
    map<char, int> mp;
    msi mp1;
    //  mp["Ami"] = 1;
    //  mp["Beta"] = 2;
    //  mp.insert(make_pair("Ami",1));
    for (int it = 0; it < 5; it++)
    {
        mp1[s2[it]]++;
        //cout << s2[it] << nl;
    }
    // for (auto &i : mp)
    // {
    //     cout << i.first << i.second << endl;
    // }
    for (auto &i : mp1)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}