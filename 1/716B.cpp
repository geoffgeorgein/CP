#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>

using namespace std;
const int mod=1e9+7;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);  
freopen("output1.txt", "w", stdout);
#endif
    
     int n,t,k,b;
    
    cin>>t;
    while(t--){
        
      cin>>n>>k;
      long long  ans=1;
     

     for(int i=0;i<k;i++){
         ans=(ans*n)%mod;
     }
     cout<<ans<<endl;
    }

}
