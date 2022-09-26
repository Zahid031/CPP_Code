#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    int s1 = (n / 3) * y + (n % 3) * x;
    int s2 = x * n;
    if (s1 < s2)
        cout << s1 << endl;
    else
        cout << s2 << endl;
    return 0;
}