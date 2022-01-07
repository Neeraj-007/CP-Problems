#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=8;
    int arr[n]={2,4,7,11,14,16,20,21};
    int k=31;
    int low=0;
    int high=n-1;

    while(low!=high){

        int sum=arr[low]+arr[high];
      //  cout<<sum<<endl;
        if(sum==k){cout<<arr[low]<<" "<<arr[high];break;}
        else if(sum<k){low++;}
        else {high--;}

    }
    if(low==high)cout<<"No pair found";

    


}
