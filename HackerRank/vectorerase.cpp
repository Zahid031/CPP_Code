#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, x, n, a, b, c;
    cin >> n;
    vector<int> vec;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    cin >> a >> b >> c;
    vec.erase(vec.begin() + a - 1);
    vec.erase(vec.begin() + b - 1, vec.begin() + c - 1);
    cout << vec.size()<<endl;
    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}