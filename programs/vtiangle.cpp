#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three no.";
    cin>>a>>b>>c;
    if(a+b<=c||b+c<=a||c+a<=b){
        cout<<"Yes! valid triangle is formed";
    }
    else{
        cout<<"No! valid triangle is not formed";
    }
    return 0;
}