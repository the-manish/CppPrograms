#include<iostream>
using namespace std;
int main(){
    int a,b,c,n;
    a=0;
    b=1;
    cout<<"Enter the numbers\n";
    cin>>n;
    
    for(int i=0;i<=n;i++){
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
    
    return 0;
}