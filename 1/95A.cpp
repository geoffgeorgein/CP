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
        string s;
        cin>>t;
        while(t--){

            
            cin>>n;
            vector<int>a(n,0);
            cin>>s;
            int f=0;
            int d=0;
          
            
            for(int i=0;i<n;i++){
                
                if(s[i]=='1'){
                    d+=1;
                }
            

                 if(d>=ceil(i+1)/2){
                        f=1;
                        cout<<"YES"<<endl;
                        break;
                    }
            }
            if (f==0){
                cout<<"NO"<<endl;
            }
            

        }

 
 
    
    }
 
 
        