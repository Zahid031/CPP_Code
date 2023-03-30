#include <bits/stdc++.h>
using namespace std;
int isprime(int num)
{
    int i;
    for (i = 2; i <= (num / 2); ++i)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m, c = 0, temp;
    cin >> n >> m;
    for (int i = n + 1; i <= 50; i++)
    {
        if (isprime(i))
        {
            c++;
            temp = i;
            break;
        }
        // else cout << "NO" << endl;
        // cout <<
    }
    if (c >= 1 && temp == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    return 0;
}