/* Read input from STDIN. Print your output to STDOUT*/

#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
    int n,t,k;
    
    cin>>t;
    while(t--){
        

        cin>>n;
        vector<vector <int>>a(n,vector<int>(n,0));

        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n==2){
            cout<<-1<<endl;

        }
        else{
            int c=1;
            int p=0;
            //int d=1;
            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    if(c>n*n){
                        c=2;
                    }
                    a[i][j]=c;
                    c+=2;

                }
            }
            for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

        }

    

    }
  
   

}



