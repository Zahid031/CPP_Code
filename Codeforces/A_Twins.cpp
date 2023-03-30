#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum =sum + a[i];
    }
   // cout << sum << endl;
    sort(a, a + n);
    int s = 0;
    int c = 0;
    for (int j = n-1; j >= 0; j--)
    {
        s =s+ a[j];
        c++;
        sum=sum-a[j];
        if (s > sum)
            break;
    }
    //cout << s << endl;
    cout << c << endl;
    return 0;
}