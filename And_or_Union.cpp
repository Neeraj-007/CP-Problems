// O(N logN)

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n, res=0;
         cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)cin>>arr[i];

        for(int i=0;i<32;i++){
            int one=0;
            for(int j=1;j<=n;j++){
                    if(arr[j]&(1<<i))
                    {   one++; 
                        if(one>=2) break;}
                    }

            if( one>=2){
                //cout<<one<<(1<<i)<<" "<< i<<endl;
                res=res+(1<<i);

            }

            }
         cout<<res<<endl;

            }


return 0;
}

