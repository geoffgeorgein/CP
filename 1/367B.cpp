#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>

using namespace std;
const int mod=1e9+7;

    int main()

    {  
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
        
        int t;
        int n,q,m; 

        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>q;
        sort(a.begin(),a.end());
        while(q--){

            cin>>m;
            if(m>=a[n-1]){
                cout<<n<<endl;
                continue;
            }
            
                
                auto u=upper_bound(a.begin(),a.end(),m);
                cout<<(u-a.begin())<<endl;
                
            }

  
        
    }


        
  