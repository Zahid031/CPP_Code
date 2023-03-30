#include <bits/stdc++.h>
using namespace std;
void permute(vector<int> a, int n)
{
    int count =0;
    sort(a.begin(),a.end());{
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        count ++;
    }
    while(next_permutation(a.begin(),a.end()));}
    cout << count << endl;
}
int main()
{
    int n;
    //cin >> n;
    vector<int> v ={4,1,3};
    permute(v,v.size());
}