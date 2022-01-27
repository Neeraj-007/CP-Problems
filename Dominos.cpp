#include<bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >>t;
    while(t--){

        int n , k1,k2;
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;

        if(w+b>n)cout<<"NO"<<endl;
        else{
            if(((abs(k1-k2)/2 + min(k1,k2)) >= w)  and ((abs(k1-k2)/2 + min(n-k1,n-k2)) >= b)){cout<<"YES"<<endl;}
            else cout<<"NO"<<endl;


        }


    }



    return 0;
}