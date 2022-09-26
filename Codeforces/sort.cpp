#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i;
    cin >> N;
    vector<int> v;
    for(i=0; i<N; i++){
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    for(i=0; i<N; i++){
        cout << v[0] <<endl;
    }
}