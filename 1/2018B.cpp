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
     int a,x;

  
     long long s=0;

     cin>>n;
     
     unordered_map<int ,int>c;

     for(int i=0;i<n;i++){

         cin>>a>>x;
         c[a]=x;

     }
     cin>>m;
     for(int j=0;j<m;j++){

         cin>>a>>x;
         c[a]=max(x,c[a]);
     }
     for(auto i:c){

         s+=(long long) i.second;
     }
     cout<<s<<endl;
  
     

     
   
  //  cout<<endl;


 
    }
        