# include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n , k;
    
    cin >> n >>k;
    int arr[n];
    
    for (int i=0;i<n;i++)cin>>arr[i];
    
    // arrr[1 0 1 0 1 0 1]
    
 
    
    stack <int > s1,s2;
    int criminal=0;
    if(arr[k-1]==1)criminal+=1;
    
    for(int i=0;i<k-1;i++)s1.push(arr[i]);
    
    for(int i=n-1;i>=k;i--)s2.push(arr[i]);
    
    while (!s1.empty() and !s2.empty()){
        
         if(s1.top()==s2.top() and s2.top()==1)criminal+=2;
         
         s1.pop();
         s2.pop();
         
    }
    
    if(s1.empty()){
         
         while(!s2.empty()){
              criminal+=s2.top();
              s2.pop();
         }    }
         
         
    if(s2.empty()){
         
         while(!s1.empty()){
              criminal+=s1.top();
              s1.pop();
         }    }
    
    
    
    cout<<criminal;
    return 0;
}                                                       
