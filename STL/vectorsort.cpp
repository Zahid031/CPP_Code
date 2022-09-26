#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> v;
    for(int i=0; i<N; i++){
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<N; i++){
        cout << v(i) <<endl;
    }
}