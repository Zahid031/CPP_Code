#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 1000;
int a[maxn];
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        scanf("% d", &a[i]);
    int flag = 0;
    int l = 0, r = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] < a[i - 1])
        {
            r = i;
            break;
        }
    }
    // reverse flip array
    reverse(a + l, a + r + 1);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        puts("no");
    else
    {
        puts("yes");
        cout << l+1 << " " << r+1 << endl;
    }
    return 0;
}
