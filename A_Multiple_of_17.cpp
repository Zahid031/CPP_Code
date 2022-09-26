#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;

    while (EOF)
    {
        cin >> n;
        if (n == 0)
            break;
        else
        {
            if (n % 17 == 0)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
    }
    return 0;
}