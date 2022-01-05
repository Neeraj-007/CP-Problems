#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    while (n--){

        int n, x, y; 
        cin>>n>>x>>y;

        int c1=(n+1)/2;
        int c2=c1;

        if((abs(c1-x) + abs(c2-y))%2==0){cout<<0<<endl;}
        else cout<<1<<endl;

    }

return 0;
}
