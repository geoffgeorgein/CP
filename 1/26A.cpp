#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

    int n;

    cin>>n;
    
    
    int k=0;
    for (int j1=6;j1<=n;j1++){

    int c=0;
    int f=0;
    int j=j1;
    
    for(int i=2;i*i<=j;i++){

        
        if(j%i==0){
            
            c+=1;
            while(j%i==0){

                j/=i;
                
            }
            
        }
        if(c>2){
            f=1;
            break;
        }

    }
    if (f==0){
        k+=1;
    }
    
    }
    cout<<k<<endl;
}
