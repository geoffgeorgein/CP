#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>

using namespace std;
const int mod=1e9+7;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);  
freopen("output1.txt", "w", stdout);
#endif
    
     int n,x,t;
     int k=0;
     long long s;
     long long d;
    
    
        char c;
    cin>>n>>s;
    while(n--){

        cin>>c>>d;

        if (c=='+'){
            s+=d;

        }
        else{
            if((s-d)>=0){
                
                s-=d;
            }
            else{
                k+=1;
            }
        }



    }

    cout<<s<<" "<<k;
        

    }


