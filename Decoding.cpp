# include <bits/stdc++.h>
using namespace std;
 

 
int main(){
     int n;
    string s;
    cin>>n>>s;
    
    
   string naya="";
    if(n%2==0){
    
    for(int i=0;i<n;i++){
           if(i%2==0){
          naya=s[i]+naya ;   }
          else {naya=naya+s[i];}
    }
         
    }
    
    else{
     
     for(int i=0;i<n;i++){
           if(i%2==1){
          naya=s[i]+naya ;   }
          else {naya=naya+s[i];}
    }    
         
         
         
    }
   
   cout << naya;
    
    
    return 0;
    
    
    
}                                                       
