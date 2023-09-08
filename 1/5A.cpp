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

     int n,m;

  
     long long s=0;

     cin>>n;
     int c=0;
     vector<int>a(n);

     for(int i=0;i<n;i++){

         cin>>a[i];

     }
    
    for(int i=0;i<n;i++){

        if(a[i]%2!=0){

            if(c%2==0){
                a[i]=ceil(a[i]/2.0);
                
            }
            else{
                a[i]=floor(a[i]/2.0);
            }
            c+=1;
            continue;
        

        }
        else
        {

            a[i]=a[i]/2;
            //c+=1;
        }

        

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
     

     
   
  //  cout<<endl;


 
    }
        