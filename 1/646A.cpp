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

     int t;

     int n,m;
     int x;

  
     long long s=0;
     
     cin>>t;
     while(t--){
         int c=0;
     int e=0;

     cin>>n>>x;

     vector<int>a(n);

     for(int i=0;i<n;i++){

         cin>>a[i];

         if(a[i]%2==0){
             e+=1;
         }
         else{
             c+=1;
         }


     }

     if(c==n && x%2==0){
         cout<<"No";
     }
     else if(c==0){
         cout<<"No";
     }
     else if(x==n && c%2==0){
         cout<<"No";

     }
    else{
        cout<<"Yes";
    }

    
         
     cout<<endl;
     }
  
     

 
    }
        