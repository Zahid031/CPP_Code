#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, str = "";
    int l1, l2, sum;

    cin >> a >> b;

    if (a.size() > b.size())
    {
        swap(a, b);
    }
    l1 = a.size();
    l2 = b.size();
    // cout << a << endl;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; i < l1; i++)
    {
        sum = ((a[i] - '0') + (b[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (int i = l1; i < l2; i++)
    {
        sum = ((b[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
    {
        str.push_back(carry);
    }
    reverse(str.begin(), str.end());
    cout << str << endl;
}