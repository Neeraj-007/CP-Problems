#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++){cin>>brr[i];}
    int max_a=0, max_b=0;
    for(int i=0;i<n;i++){
    
        if(arr[i]>brr[i]){
            swap(arr[i],brr[i]);
            }
        
        max_a=max(max_a,arr[i]);
        max_b=max(max_b,brr[i]);


    }

    cout<<max_a*max_b<<endl;






}
 
 
 
 
return 0;
 }