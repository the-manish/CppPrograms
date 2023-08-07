#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int huu[n];
    for(int i=0;i<n;i++){
        cin>>huu[i];
    }
    
    int maxNO=INT_MIN;
    int minNO=INT_MAX;
 for(int i=0;i<n;i++){ 
     if(huu[i]>maxNO){
         maxNO=huu[i];
     }
     if(huu[i]<minNO){
         minNO=huu[i];
     }
 } 
 cout<<maxNO<<" "<<minNO;
 
    return 0;
}