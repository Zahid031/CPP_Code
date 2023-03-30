#include <bits/stdc++.h>
using namespace std;
const int max=1e5+5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, t, a, i, sum = 0, m;
    vector<long long> v1;
    cin >> n >> t;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        sum = sum + a;
        v1.push_back(sum);
    }
    m = t % sum;
    //cout << m << " sum : " <<  sum << endl;
    for (i = 0; i < n; i++)
    {
        if (m < v1[i])
        {
            if(i==0){
            cout << i + 1 << " " << m  << endl;}
            else {
                cout << i + 1 << " " << m - v1[i-1]  << endl;
            }
            return 0;
        }
    }
}