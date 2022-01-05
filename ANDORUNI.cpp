// O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int p,q;
        cin>>p;
        q=p*(p-1)/2;
        int a[p], b[q];

        for(int i=0;i<p;i++)cin>>a[i];
        int t=0;
        for(int i=0;i<p;i++){
            for(int j=i+1;j<p;j++){
                t=(t|a[i]&a[j]);

            }
        }
        cout<<t<<endl;
       
    }


return 0;
}
