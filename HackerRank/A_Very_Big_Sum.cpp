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
    int n;
    ll sum = 0;
    cin >> n;
    vector<string> vs(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> vs[i];
        reverse(vs[i].begin(),vs[i].end());
    }
    int sum=0,car=0;
    for(int i=0; i<vs[i].length(); i++){
        sum=sum+vs[i][i]-'0';
    }
    cout << sum << nl;

    return 0;
}