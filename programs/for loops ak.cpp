#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    for(int num=a;num<=b;num++){
        for(int i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        int i;
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}