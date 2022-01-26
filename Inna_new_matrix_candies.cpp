#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int min_Num=-1;
    for(int i=0;i<n;i++){
        string s="";
        cin>>s;
        int ss=s.find("S");
        int gg=s.find("G");
        if(ss-gg>0){

            min_Num=min(ss-gg,min_Num);
            
            }

    }
    cout<<min_Num<<endl;

    return 0;
}