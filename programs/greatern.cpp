#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the three numbers";
cin>>a,b,c;
if(a>b||a>c){
    cout<<a<<"is the greater number ";
}
else if(b>a||b>c){
    cout<<b<<"is the greater number";
}
else (c>b||c>a){
    cout<<c<<"is the greater number";
}
    return 0;
}




