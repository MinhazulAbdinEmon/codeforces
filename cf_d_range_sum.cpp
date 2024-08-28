#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for (int st_point=0; n>st_point;st_point++){
        int l,r;
        cin>>l>>r;
        int sum = 0;
        int oi = l;
        if(l>r){
            swap(l,r);
        }
        for (int summation_loop = 0; summation_loop<=(r-l); summation_loop++){
           
            sum += oi++;
            cout<<sum<<endl;
        }
    }
}