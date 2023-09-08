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
        int n,k;
        long long s=19;

        cin>>k;
        if(k==1){
            cout<<s<<endl;
            return 0;
        }
        
        int d=0;
        int c=0;
        while(c!=k){

            int s=0;
            n=d;
            while(n){

                s+=n%10;
                n/=10;

            }
            d+=1;
            if(s==10){
                c+=1;
             }
   

    }
 
      cout<<d-1<<endl;
    }
        