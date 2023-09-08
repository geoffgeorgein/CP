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
    
     int n,t,k,b;
    
    cin>>t;
    while(t--){
        
        cin>>n;
        vector<vector<int>>a(n,vector<int>(n,0));

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                if(i==j){
                    a[i][j]=1;
                }
                if(i+j==n-1){
                    a[i][j]=1;
                }
            }
        }
        if(n%2!=0){
            a[n/2][(n+1)/2]=1;
            a[(n+1)/2][n/2]=1;
        }

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }



     
    }

}
