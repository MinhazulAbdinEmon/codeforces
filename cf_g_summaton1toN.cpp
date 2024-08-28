#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int st_point = 0;
    int sum=0;
    int ans=0;
    while(st_point<=n){
        ans+= sum++;
        st_point+=1;
    }
    cout<<ans<<endl;
    
}