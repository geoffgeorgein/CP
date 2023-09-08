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
        int n,l;
    
        cin>>n>>l;

        vector<int>a(n);
        

       for(int i=0;i<n;i++){
           cin>>a[i];
       }
    
       sort(a.begin(),a.end());
       double maxi=a[0];

       for(int i=0;i<n-1;i++){

           maxi=max(maxi,(a[i+1]-a[i])/2.0);

          
       }
       maxi=max(maxi,(l-a[n-1]-0.0));
       cout<<fixed<<setprecision(12)<<maxi<<endl;
        
    }


        
    
        



