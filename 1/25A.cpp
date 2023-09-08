#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>

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
        vector<int>c(2,0);
        
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                c[0]+=1;
            }
            else{
                c[1]+=1;
            }

        }
        if(c[0]>c[1]){

            for(int i=0;i<n;i++){
                if(a[i]%2!=0){
                    cout<<(i+1)<<endl;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    cout<<(i+1)<<endl;
                    break;
        }
        

      
    }
        }
    }


        
    
        



