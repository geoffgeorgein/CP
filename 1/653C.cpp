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

     int n,a,b;
     
    
     cin>>t;
     while(t--){

        string s;
        cin>>n;
        cin>>s;
        int c=0;
        int d=0;

        for(int i=0;i<n;i++){

            if(s[i]==')'){
                c-=1;
            }
            else{
                c+=1;
            }

            if(c<0){
                d+=1;
                c=0;
            }


        }

        cout<<d<<endl;
     }

    }
        