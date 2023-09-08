#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>

using namespace std;
const int mod=1e9+7;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);  
freopen("output1.txt", "w", stdout);
#endif
    
     int t;
     long long n;
     
    
    
    cin>>t;
    while(t--){

        cin>>n;
        long long s=0;

        if(n%2050!=0){
            cout<<-1<<endl;
            continue;
        }
        else{
            long long n1=n/2050;

            

            while(n1>0){

                long long k=n1%10;
                //cout<<k<<" ";
                s+=(k);
                n1/=10;
                
            }
           
            cout<<s<<endl;
             


        }
      
  
    }
}


