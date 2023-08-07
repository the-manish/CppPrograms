#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)(65+j-1);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
