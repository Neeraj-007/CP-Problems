# include <bits/stdc++.h>
using namespace std;
 

 
int main(){
     int n;
     cin>>n;
     long long arr[n+1],brr[n+1];
     for(int i=1;i<=n;i++){cin>>arr[i];brr[i]=arr[i];}
     
     
     sort(arr+1,arr+n+1);
     
     for(int i=1;i<=n;i++){arr[i]+=arr[i-1];brr[i]+=brr[i-1];}
     
     int p;
     cin>>p;
     while(p--){
          
          int type, l ,r;
          
          cin>>type>>l>>r;
          
          if(type==2)cout<<arr[r]-arr[l-1]<<endl;
          
          else cout<<brr[r]-brr[l-1]<<endl;
     
      
     }
     
     
     
    return 0;
    
    
    
}                                                       
