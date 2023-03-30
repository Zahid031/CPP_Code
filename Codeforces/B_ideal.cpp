#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> freq(51, 0);
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            for (int j = l; j <= r; j++)
            {
                freq[j]++;
            }
        }

        int max_freq = *max_element(freq.begin(), freq.end());
        int count_max_freq = count(freq.begin(), freq.end(), max_freq);

        if (freq[k] == max_freq || count_max_freq >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
