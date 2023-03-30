#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, k, t[25];
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> n >> k;
        for (int j = 0; j < n; j++) {
            cin >> t[j];
        }
        int sum = 0;
        sort(t, t + n);
        for (int j = 0; j < n; j++) {
            sum = sum + t[j] * k;
            k = max(k - 1, 1);
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
