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
    
     int n,t;
     int k=0;
     string x;
    
    
    cin>>t;
    while(t--){
        int f=0;
        cin>>x;
        n=x.length();
        string d="";

        if(count(x.begin(),x.end(),x[0])==n){
            cout<<x<<endl;
        }
        else{

            for(int i=0;i<n;i++){
                d+="10";
            }
            cout<<d<<endl;
        }
        
      


    }
}


