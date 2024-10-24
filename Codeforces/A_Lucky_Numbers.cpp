#include <bits/stdc++.h>
using namespace std;

int findLargestSmallest(int num)
{
    int largestDigit = 0;
    int smallestDigit = 9;
    int digit;
    while (num)

    {
        digit = num % 10;
        largestDigit = max(digit, largestDigit);

        smallestDigit = min(digit, smallestDigit);
        num = num / 10;
    }
    return (largestDigit - smallestDigit);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int max, ans = 0, out = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            max = findLargestSmallest(i);

            if (max >= ans)
            {
                ans = max;
                out = i;
            }
            if (ans == 9)
            {
                //out = i;
                break;
            }

            // break;
        }
        cout << out << endl;
    }
    return 0;
}
