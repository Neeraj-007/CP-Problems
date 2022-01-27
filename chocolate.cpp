#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;cin>>n;

    long long ans=0;
    bool flag=true;
       
    for(int i=0;i<n;i++){

        int x,prev;
        cin>>x;
        
        if(x==1){

            if (flag==true){flag=false;ans=1;}

            else{
                ans*=(i-prev);

            }
            // cout<<ans<<endl;

            prev=i;
        }

       
    }
     cout<<ans<<endl;



    return 0;


}