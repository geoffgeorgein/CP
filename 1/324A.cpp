#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>
#include <map>
#include <unordered_map>
 
using namespace std;
const int mod=1e9+7;
 
    int main()
 
    {  
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif

    

     int n,t,m;
     int x;

  
     long long s=0;
     
     cin>>n>>t;

    

    if(t==10){

        if(n==1){
            cout<<-1;
            return 0;
        }

        cout<<1;
        n-=1;
        while(n--){

            cout<<0;
        }
    return 0;
    }


     for(int i=0;i<n;i++){

       cout<<t;  
     }

    
    
   
     }
  
     

 
    
        