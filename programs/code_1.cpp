#include<iostream>
using namespace std;
int main(){
    int p1,p2,p3,p4;
    cin>>p1>>p2>>p3>>p4;
    int success=0;
    if(p1>=10){
        success=1;
    }
    if(p2>=0){
        success=success+1;
    }
     if(p3>=10){
        success=success+1;
    }
    if(p4>=10){
        success=success+1;
    }
     cout<<success;
    
    return 0 ;
}