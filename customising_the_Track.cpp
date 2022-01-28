#include<bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){
    int n ;
    cin>>n;
    int arr[n];
    ll sum=0;
    for(int i=0;i<n;i++){int x;cin>>x;sum+=x;}
    ll mod=sum%n;
    mod=(mod)*(n-mod);
    cout<<mod<<endl;

}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);
 int t;cin>>t;
 while(t--){solve();}
 
 
 
 
 
return 0;
 }