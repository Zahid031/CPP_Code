#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c;
    int arr[100], i;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> n >> c;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == true)
                continue;
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    visited[j] = true;
                    count++;
                }
            }
            //cout << arr[i] << " " << count << endl;
            if (count > c)
                sum = sum + c;
            else
                sum = sum + count;
        }
        cout << sum << endl;
    }
}