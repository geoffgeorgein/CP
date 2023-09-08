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
     string s="abcdefghijklmnopqrstuvwxyz";
    
     cin>>t;
     while(t--){

         string d="";
         cin>>n>>a>>b;

        for(int i=0;i<n;i+=b){

            for(int j=0;j<b && d.length()<n;j++){
                d+=s[j];
            }
        }
        cout<<d<<endl;
        

     }

    }
        