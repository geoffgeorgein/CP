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
        
        int t,n;
        

        cin>>t;


        while(t--){

            cin>>n;
            vector<int>a(n);
            long long s=0;
            int p;

            for(int i=0;i<n;i++){
                cin>>a[i];
            }

            for(int i=0;i<n;i++){

                int j=i;
                p=a[i];

                while((a[i]>0)==(a[j]>0) && j<n){


                    p=max(p,a[j]);
                    j+=1;
                }
                s+=(long long)p;
                i=j-1;

            }
            cout<<s;

            cout<<endl;
        
         
        }

    
    }


        
  