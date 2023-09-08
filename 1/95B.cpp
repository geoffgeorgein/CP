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
        int n,w,r;
        string s;
        cin>>t;
        while(t--){

            
            cin>>n>>w>>r;
            vector<int>a(n);
            map<int,int>c;
            int s=0;

            for(int i=0;i<n;i++){

                cin>>a[i];

                c[a[i]]+=1;
            }
            for(auto j=c.begin();j!=c.end();j++){
              //  cout<<j->first<<" "<<j->second<<endl;
                if(j->second %2==0){
                    s+=int(j->second)*(j->first);
                }
            }
            if(s+r>=w){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        
          

        }

 
 
    
    }
 
 
        