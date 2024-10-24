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
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int k = 4;
    int l = 0, r = 4;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid == k)
        {
            cout << mid << endl;
            break;
        }
        else if (arr[mid] > k)
        {
            r = mid-1;
        }
        else
            l = mid+1;
    }

    return 0;
}