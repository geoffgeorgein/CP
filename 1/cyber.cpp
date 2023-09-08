#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
           
        }
        int p=0,q=0;
        map<int,int>m1;
        map<int,int>m2;
        int f=0;
        for(int i=0;i<n;i+=2){
            
          m1[a[i]]+=1;
            
        }
         for(int i=1;i<n;i+=2){
            
          m2[a[i]]+=1;
            
        }
        int ma1,c1,ma2,c2;
        for(auto i=m1.rbegin();i!=m1.rend();i++){
            ma1=i->first;
            c1=i->second;
        }
        for(auto i=m1.rbegin();i!=m1.rend();i++){
            if(i->second==c1){
                ma1=i->first;
        }
        }
        
        for(auto i=m2.rbegin();i!=m2.rend();i++){
            ma2=i->first;
            c2=i->second;
        }
        for(auto i=m2.rbegin();i!=m2.rend();i++){
            if(i->second==c2){
                ma2=i->first;
        }
        }
        if(c1>c2){
            cout<<ma1;
        }
        else if(c1==c2){
    cout<<min(ma1,ma2);
        }
        else{
            cout<<ma2;
}
        cout<<'\n';
    }
    return 0;
}
 