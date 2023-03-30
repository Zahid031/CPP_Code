#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    multiset<int> m;
    int a;
    for(int i=0; i<5; i++){
        cin >> a;
        m.insert(a);
    }
    for(auto i=m.begin(); i!=m.end(); i++){
        cout << *i << endl;
    }
    m.erase(m.begin(),m.find(4));
    for(auto i=m.begin(); i!=m.end(); i++){
        cout << *i << endl;
    }
    cout << "lower bound: " << *m.lower_bound(4) << endl;
    cout << "Upper bound" << *m.upper_bound(3) << endl;
 
    return 0;
}