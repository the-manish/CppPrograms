#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"1"<<"rohan"<<" " <<""<<"2"<<"manish"<<" "<<"3"<<"vivashwat";
    int arr[3];
    
    
    for(int i;i<3;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i;i<3;i++){
        maxNo=max(maxNo,arr[i]);

    }
for(int i;i<3;i++){
        minNo=min(minNo,arr[i]);
    }
    if(maxNo==arr[0]){
        cout<<"rohan";
    }
    if(maxNo==arr[1]){
        cout<<"manish";
    }
    if(maxNo==arr[2]){
    cout<<"vivashwat";
    }
    if(minNo==arr[0]){
        cout<<"rohan";
    }
    if(minNo==arr[1]){
        cout<<"manish";
    }
    if(minNo==arr[2]){
    cout<<"vivashwat";
    }
    
    return 0;
}


