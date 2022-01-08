#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n, k,sum_k=0;
    cin>>n>>k;
    int arr[n];
 
    
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        
        if(i<k)sum_k+=arr[i];
        
         
    }
        
    if(n<2){cout<<1;return 0;}
    
    int min_Sum=sum_k, l=0;
 
    for(int i=1;i<=n-k;i++)
    {    
        //2 1
        
        sum_k=sum_k-arr[i-1]+arr[i+k-1];
        //cout<<sum_k<<endl;
        if(sum_k<min_Sum){min_Sum=sum_k;l=i;}
        
        
        
    //    cout<<i<< " "<< sum_k<<" "<<l<<endl;
    }
    
    cout<<l+1;
 
    return 0;
}