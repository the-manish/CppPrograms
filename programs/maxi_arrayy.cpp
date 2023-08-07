#include<iostream> 
using namespace std;
int main(){
    int arr[]={23,56,67,89,10,100,76,87,90};
    int max=arr[0];
    int i=0;
    while(i<9){
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }
    cout<<max;
    return 0;
}