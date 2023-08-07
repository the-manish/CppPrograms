#include <iostream>

using namespace std;
int binarysearch(int  input[],int n,int val){
    int start =0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(input[mid]<val){
            start=mid+1;
        }
        else if(input[mid>val]){
            end=mid-1;
        }
        
    }
    return -1;
}

int main()
{
    int input[10]={4,8,13,16,42,57,90,100,101,108};
    int n=10;
    int val;
    cin>>val;
    cout<<binarysearch(input,n,val)<<endl;

    return 0;
}
