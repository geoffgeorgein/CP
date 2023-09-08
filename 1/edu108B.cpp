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
        float n,m,k; 

        cin>>t;


        while(t--){

            cin>>n>>m>>k;

            int p=min(m,n);
            int q=max(m,n);

            if((q-1)+(q*(p-1))==k){

                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
         
        }

         
  
        
    }


        
  