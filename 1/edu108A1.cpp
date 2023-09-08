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
        double r,b,d; 
 
        cin>>t;
 
 
        while(t--){
 
            cin>>r>>b>>d;
            if(r==b){
                cout<<"YES"<<endl;
                continue;
            }
            double p=max(r,b);
            double q=min(r,b);
 
            if( ceil((p-q)/q)>d){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
            cout<<endl;
           //     cout<<ceil(max(r,b)/min(r,b))<<" "<<d<<endl;
         
        }
 
    
    }
 
 
        