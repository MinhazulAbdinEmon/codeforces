#include <bits/stdc++.h>
using namespace std;
int main(){
    long double number;                 // taking float will not work as long double has higher precision.
    cin>>number;
    if ((ceil(number)-floor(number))==0){
        cout<<"int"<<" "<<number;
    }
    else{
        cout<<"float"<<" "<<floor(number)<<" "<<(number-floor(number));
    }
        
}