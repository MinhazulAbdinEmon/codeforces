#include <iostream>
using namespace std;
#define intt long long int          //(0≤N,M≤10^18).
int main(){
    intt n,m;
    cin>>n>>m;
    intt last_digit_of_n = n%10;
    intt  last_digit_of_m = m%10;
    intt  sum = last_digit_of_n + last_digit_of_m;
    cout<<sum<<endl;
}