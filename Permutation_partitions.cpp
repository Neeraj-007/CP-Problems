#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
 ll n , k;
 ll mod=998244353;
 
 cin>>n>>k;
 
 int arr[n];
 vector<ll> v;
 ll sum=0;
 for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>n-k){v.push_back(i);sum+=arr[i];}
    
    }
    
 ll ans=1;
 for(int i=1;i<v.size();i++){
     ans=((ans%mod)*((v[i]-v[i-1])%mod))%mod;
 }
 cout<<sum<<" "<<ans<<endl;
 
 
 
return 0;
 }