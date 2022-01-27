#include<bits/stdc++.h>
using namespace std;
 void daalo(vector <int> &v, int x){
     
     if(v.size()==0 or x>=v.back())v.push_back(x); return;

    int first= v.back();
    v.pop_back();
    daalo(v,x);
    v.push_back(first);
    return; 

 }



void sort_array(vector <int> &v){


    if(v.size()==1){return;}
 
    int x= v.back();
    v.pop_back();
    sort_array(v);
    daalo(v,x);

    return;


    




}

int main(){
 
 
    vector<int> b={10,9,8,11,22,100,5,4,3,2,1};

    
    vector<int> v={1,2,3,4,5,6,7,8};

    // sort_array(v);
    daalo(v,10);
 
    for(auto x : v )cout<<x<<" ";

 
    return 0;

}