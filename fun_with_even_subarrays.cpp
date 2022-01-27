#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=n-1;i>-1;i--){
        cin>>arr[i];
    }
    //[3 1 4 2 2 3 6]
    // 0 1 2 3 4 5 6 
    // 0   2    4
    // [3 3 4 2 3 6]
    // 
    int k=0;
    //if(arr[0]!=arr[1]){k++;}

    for(int i=1;i<=n/2;i++){
        if(i==1 and arr[0]!=arr[i]){k++;}

        else if(arr[0]!=arr[2*i]){k++;}
        else{i++;}
    }
    cout<<k<<endl;


}




int main(){
 int t;cin>>t;
 while(t--){solve();} 
 
 
 
 
return 0;
}   