#include <bits/stdc++.h>
using namespace std;
int main() {
    char ch;                   // taking char because we only charracters not words.
    cin>>ch;
    

    if (ch>=65 && ch<=90){                  // A=65 a=97 (91-96 normal useless signs)
        
        cout<<(char)(ch+32)<<"\n";         // ( ch>='A' && ch<='Z') will also work
    }
    else{
        
        cout<<(char)(ch-32)<<"\n";
    }
    
    
    
}    