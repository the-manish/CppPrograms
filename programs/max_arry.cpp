#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arry[100];
    
 for(int i;i<n;i++){
    cin>>arry[i];
 }
 int max=INT_MIN;
 for(int i=0;i<n;i++){
    if (arry[i]>max){
        max=arry[i];
    }
 }
 cout<<max;
    return 0;
}