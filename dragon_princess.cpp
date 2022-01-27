#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
     float vp,vd,t,f,c,T;
     cin>>vp>>vd>>t>>f>>c;
     float bijo=0;
     
     if(vp>= vd){cout<<0; return 0;}
     while(true){
          
          float T=(vp*t)/(vd-vp);
          float dp=vp*(T+t);
          // cout<<"dp "<<dp<<" t "<<t<<" T "<<T<<endl;
          if(dp<c)
          {bijo++;
          t=t+T+(dp/vd)+f;
          // cout<<t<<"--"<<endl;
     
               
          }
          else{ break;}
          // if(bijo==10)break;
          
     }
 
 
     cout<<bijo;
 
 
 
 
 
 
    return 0;
}