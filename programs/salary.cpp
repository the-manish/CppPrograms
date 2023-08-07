#include <iostream>
using namespace std;
int main(){
    int salary,time;
    cout<<"enter the salary";
    cin>>salary;
    cout<<"enter the time in yrs";
    cin>>time;
    if(time>5){
    
        cout<<"bonous amount="<<0.05*salary;
    }else{
        cout<<"bonous amount=0";
    }
    return 0;
}