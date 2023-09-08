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

    int t,n,x,c,d;
    
    cin>>n;
    
    if(n%2==0){

        int c=n/2;
        cout<<c<<endl;
        for(int i=0;i<c;i++){
            cout<<2<<" ";
        }

    }
    else{
        if(n>3){
            int c=1;
            n=n-3;
            cout<<(c+n/2)<<endl;
            cout<<3<<" ";
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }

        }
    }
    
}