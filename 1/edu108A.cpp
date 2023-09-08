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
        long long r,b,d; 

        cin>>t;


        while(t--){

            cin>>r>>b>>d;
            if(r==b){
                cout<<"YES"<<endl;
                continue;
            }
            long long p=max(r,b);
            long long q=min(r,b);

            if( (d+1)*q < p){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
            cout<<endl;
           //     cout<<ceil(max(r,b)/min(r,b))<<" "<<d<<endl;
         
        }

    
    }


        
  