#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>
#include <map>
 
using namespace std;
const int mod=1e9+7;
 
    int main()
 
    {  
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
        
        int t;
        int n,q;
      
       

            long long s=0;
            cin>>n;
            vector<long long>a(n);

            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            cin>>q;
           // cout<<q<<endl;
            vector<int>x(q);
            for(int i=0;i<q;i++){
                cin>>x[i];
            }
            for(int i=0;i<n;i++){

                s=(s+a[i]+mod)%mod;
            }
            int j=1;
          //  cout<<q<<endl;
            while(q--){
                s=((s*2) % mod);
                cout<<(s)<<endl;
                
            }


 
    
    }
 
 
        