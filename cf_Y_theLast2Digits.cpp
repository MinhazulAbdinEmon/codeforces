#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long last_two_dig = (a%100)*(b%100)*(c%100)*(d%100);
    long long ans = last_two_dig%100;
    if (ans<10){
        cout<<0<<ans;
        
    }
    else{
        cout<<ans;
    }
}