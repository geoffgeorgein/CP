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
        int n,k;

 
        cin>>n>>k;
        vector<int>s(n+1,0);

        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s[i]=s[i-1]+a[i];

        }
        int mini=s[k];
        int j=1;
        if(n==k){
            cout<<1<<endl;
            
        }
        else{

        
        for(int i=k+1;i<=n;i++){

           
            if(s[i]-s[i-k] < mini){
                mini=s[i]-s[i-k];
                j=i-k+1;
            }
        }
        
     
        cout<<(j)<<endl;
        }
 
 
    
    }
 
 
        