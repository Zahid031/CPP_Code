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
    cin >> n;
    vector<pair<int, int>> ans;
    for (int i = n / 2; i > 0; i--)
    {
        if (i * (n / i) == n)
        {
            ans.push_back(make_pair(i, (n / i)));
            break;
        }
    }
    for (const auto& pair : ans) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }

    return 0;
}