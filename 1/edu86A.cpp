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
        
        int t,n,k;
        

        cin>>t;


        while(t--){

            long long x,y,a,b;
            cin>>x>>y;
            cin>>a>>b;
            
            long long s=0;
            int p;

            s+=(long long)(min(x,y)*b);
            long long d=((x*a)+(y*a));
            int m=min(x,y);
            x-=m;
            y-=m;
          //  cout<<s<<" "<<x<<" "<<y<<endl;
            s+=(long long)(max(x,y)*a);

            cout<<min(d,s);
            
            cout<<endl;
        
         
        }

    
    }


        
  