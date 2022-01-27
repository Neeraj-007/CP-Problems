#include<bits/stdc++.h>

using namespace std;




int main(){

    long long n,m;
    cin>>n>>m;

    long long  mx=((n-m+1)*(n-m))/2;
    long long mn;
    long long k=n/m;
    if(m==1)mn=mx;
        
    else mn=(n%m)*((k+1)*(k))/2 +((n/m- n%m)*k*(k-1))/2;


    cout<<mn<<" "<<mx;


    return 0;


}