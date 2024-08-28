#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int maximum = max({a,b,c});                 // max({will give the maxM num })
        
    int minimum = min({a,b,c});                 // min({will give the minM num })
    
    cout<<maximum<<" "<<minimum;
}


