#include<bits/stdc++.h> 
using namespace std; 
void fact(int n) 
{ 
    vector<int>v; 
    v.push_back(1); 
      auto carry=0; 
    for(auto i=2;i<=n;i++) 
    {    carry=0; 
        for(auto &x:v) 
        { 
            auto m=(x*i)+carry; 
            x=(m%10); 
            carry=m/10; 
        } 
        while(carry){v.push_back(carry%10);carry/=10;} 
    } 
     
    for(auto i=v.rbegin();i!=v.rend();i++)cout<<*i; 
        cout<<endl; 
} 
 
int main() 
{ 
    //factorial of 100 
 fact(100); 
 
}