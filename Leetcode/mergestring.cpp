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
    string word1, word2;
    cin >> word1 >> word2;
    int l1 = word1.length(), l2 = word2.length();
   string res;
    if (l1 == l2)
    {
        for (int i = 0; i < l1; i++)
        {
            res.push_back(word1[i]);
            res.push_back(word2[i]);
        }
    }
    else
    {
        if (l1 > l2)
        {
            for (int i = 0; i < l2; i++)
            {
                res.push_back(word1[i]);
                res.push_back(word2[i]);
            }
            for (int i = l2; i < l1; i++)
            {
                res.push_back(word1[i]);
            }
        }
        else
        {
            for (int i = 0; i < l1; i++)
            {
                res.push_back(word1[i]);
                res.push_back(word2[i]);
            }
            for (int i = l1; i < l2; i++)
            {
                res.push_back(word2[i]);
            }
        }
    }
    for (auto i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
    cout << nl;
    return 0;
}
