#include<iostream>
using namespace std;
int main(){
    int a,  b ,  c ;
    cin>>a>>b>>c;
    int x=a , y=b , z=c;
    if(z>y){            //y>z
        swap(z,y);
    }    
    if(z>x){            //x>z
        swap(z,x);
    }
    
    if(y>x){            //x>y
        swap(x,y);
    }
    
    
    cout<<z<<endl;
    cout<<y<<endl;
    cout<<x<<endl;
    //2nd portion
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
    
    
    
