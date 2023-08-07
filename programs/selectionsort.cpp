#include <iostream>

using namespace std;
void selectionsort(int* input,int n){
    for(int i=0;i<n-1;i++){
        int min=input[i],minindex=i;
        for(int j=i+1;j<n;j++){
            if(input[j]<min){
                min=input[j];
                minindex=j;
            }
        }
        int temp=input[i];
        input[i]=input [minindex];
        input[minindex]=temp;
    }
}

int main()
{
    int arr[6]={2,6,36,87,90,35};
    selectionsort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
