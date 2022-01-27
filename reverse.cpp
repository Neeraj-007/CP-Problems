#include<bits/stdc++.h>
using namespace std;


void rev(string s){
    
    if(s.length()==0)return;

    rev(s.substr(1));
    cout<<s[0]<<endl;



}



int main(){
     int n=5;
     string s="binod";
        rev(s);

    return 0;
}