#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    for(int i=2;i<number;i++){
        
        
     if(number%i==0){
    cout<<number<<" is not prime number ";
    break;
}
else{
    cout<<number<<" is  prime number";
    break;
}
    }  
    return 0;
}