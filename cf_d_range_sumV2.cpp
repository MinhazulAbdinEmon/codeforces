#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    
    for (int st_point=0; n>st_point;st_point++){
        long long l,r;
        long long maxi,mini;
        cin>>l>>r;
        maxi = max(l,r);
        mini = min(l,r);
        mini--;
        long long result1= maxi*(maxi+1)/2;
        long long result2= mini*(mini+1)/2;
        
        
    cout<<result1 - result2<<"\n";    
        
        }
        
    
}
    
