#include <iostream>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n % 2 == 1 && m % 2 == 1)
            cout << "Tonya" << endl;
        else if (n % 2 == 0 && m % 2 ==0)
            cout << "Tonya" << endl;
        else
            cout << "Burenka" << endl;
    }
    return 0;
}