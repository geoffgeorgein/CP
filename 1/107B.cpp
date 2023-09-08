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
        int a,b,c; 

        cin>>t;
        vector<int>a1={1,11,101,1009,10007,100003,1000003,10000019,100000007};
        vector<int>a2={2,13,103,1013,10009,100019,1000033,10000079,100000037};
        while(t--){

            cin>>a>>b>>c;


            int g=a1[c-1];
            int x=a1[a-c];
            int y=a2[b-c];

            cout<<(g*x)<<" "<<g*y<<endl;
            


        }
    
        
    }


        
    
        



