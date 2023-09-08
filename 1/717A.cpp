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
        
        int t,n,k;
        

        cin>>t;


        while(t--){

            cin>>n>>k;
            vector<int>a(n);
            long long s=0;
            int p;

            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            if(n==2){
                cout<<max(0,a[0]-k)<<" "<<min(a[1]+k,a[1]+a[0]);
            }
            else{

                    for(int i=0;i<n-1 && k>0;i++){
                        int l=a[i];
                        a[i]=max(0,a[i]-k);

                        k-=l;
                        a[n-1]+=max(0,l-a[i]);

                    }
                    for(int i=0;i<n;i++){
                        cout<<a[i]<<" ";
                    }

            }


            cout<<endl;
        
         
        }

    
    }


        
  