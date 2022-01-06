/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    if(n==2){cout<<"2"; return 0;}
    
    int k=2, mx=0;
    for(int i=2;i<n;i++){
        
        if(arr[i]-arr[i-1]==arr[i-1]-arr[i-2]){
            k++;
        }
        else{
            
            k=2;
        }
        mx=max(k,mx);

    }
    cout<<mx;
            
    
    
    return 0;
}
