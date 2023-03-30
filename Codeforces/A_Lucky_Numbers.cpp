#include <iostream>
#include <algorithm>
using namespace std;

int get_luckiness(int num)
{
    int max_digit = 0, min_digit = 9;
    while (num > 0)
    {
        int digit = num % 10;
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);
        num /= 10;
    }
    return max_digit - min_digit;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int max_luckiness = -1, luckiest_num = -1;
        for (int num = max(l, 1000000 - 8); num <= r; num++)
        {
            int luckiness = get_luckiness(num);
            if (luckiness >= 8)
            {
                max_luckiness = luckiness;
                luckiest_num = num;
                break;
            }
        }
        if (luckiest_num == -1)
        {
            cout << "No lucky number found in the range." << endl;
        }
        else
        {
            cout << luckiest_num << endl;
        }
    }
    return 0;
}
