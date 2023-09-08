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
        int n;
        long long s;

        cin>>s>>n;

        int x,y;
        map<int,int>a;
        while(n--){

            cin>>x>>y;

            a[x]+=y;
            


        }
        

        for(auto i=a.begin();i!=a.end();i++){

            if(s>i->first){
                s+=(i->second);
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
         //   cout<<i->first<<" "<<i->second<<endl;
        }

        cout<<"YES\n";
        return 0;
      
      
 
    
    }
 
 
        