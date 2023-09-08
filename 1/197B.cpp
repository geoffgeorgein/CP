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

     int n,m;

     

     long long s=0;

     cin>>n>>m;
     vector<long long>a(m);

     for(int i=0;i<m;i++){

         cin>>a[i];

     }
     s+=(a[0]-1);

     for(int i=1;i<m;i++){

         if(a[i]>=a[i-1]){
             s+=(a[i]-a[i-1]);
         }
         else{
             s+=(n-a[i-1]);
             s+=(a[i]);
         }

     }
     cout<<s<<endl;

     
   
  //  cout<<endl;


 
    }
        