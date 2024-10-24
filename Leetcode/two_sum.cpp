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
    vi v;
    ll n, t, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >> t;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == t)
                cout << "[" << i + 1 << "," << j + 1 << "]" << nl;
        }
    }

    return 0;
}

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i + 1, j + 1};
            }
        }
        return {};
    }
};
