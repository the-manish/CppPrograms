#include <iostream>
using namespace std;
int main(){
    int fact,number;
    cout<<"enter the number";
    cin>>number;
    fact=1;
    for(int i=1;i<=number;i++){
        fact=fact*i;
    }
    cout<<number<<"!="<<fact;
    return 0;
}