#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define pb push_back
#define mod 1000000007

 
void solve()
{
    int n,i;
    cin >> n;
    if(n == 1)
    {
        cout << 1 << " ";
    }
    else if(n == 2)
    {
        cout << 1 << " " << 2 << " ";
    }
    else if(n == 3)
    {
        cout << 1 << " " << 3 << " " << 2 << " ";
    }
    else 
    {
        int arr[n+2];
        for(i=1; i<=n; i++)
        {
            arr[i] = i;
        }
        for(i=3; i<n; i++)
        {
            if(i+1 == n)
            {
                swap(arr[i] , arr[i+1]);
                i++;
            }
            else 
            {
                int x = arr[i];
                int y = arr[i+1];
                int z = arr[i+2];
                arr[i] = y;
                arr[i+1] = z;
                arr[i+2] = x;
                i += 2;
            }
        }
        for(i=1; i<=n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}



