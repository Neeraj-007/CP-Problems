#include <bits/stdc++.h>

using namespace std;

int main()
{

    int f=1, num=10;
    vector<int> v;
    v.push_back(1);
    int carry=0;

    for(int j=2;j<=num;j++){
        carry=0;
    
    for(int i=0;i<v.size();i++){
        f=j*v[i]+carry;
        carry=f/10;
        v[i]=f%10;

    }
    while(carry!=0){
        v.push_back(carry%10);
        carry=carry/10;
    }
    }
    for(int i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";




    return 0;
}




// {
//     int carry, f, n = 10;
//     vector <int> A;
//     A.push_back(1);
    
//     for (int i = 2; i <= n; i++)
//     {
//         carry = 0;
//         for (int j = 0; j < A.size(); j++)
//         {
//             f = i * A[j] + carry;
//             A[j] = f % 10;
//             carry = f / 10;
//         }
            
//         while (carry != 0)
//         {
//             A.push_back(carry % 10);
//             carry = carry / 10;
//         }
//     }
    
//     for (int i = A.size() - 1; i >= 0; i--) 
//     {
//         cout << A[i]<<" ";
//     }
// }