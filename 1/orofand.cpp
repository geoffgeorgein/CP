
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    vector<long long>a(n);
	    int ans=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    vector<int>c(32);
	    for(int i=0;i<n;i++){
	        
	        for(int j=0;j<31;j++){
	            
	            if((a[i]>>j)&1){
	                c[j]+=1;
	            }
	        }
	    }
	    
	    
	        
	        for(int j=0;j<31;j++){
	            
	            
	            ans+=(1<<j)*(c[j]>0);  
	            
	        }
	        cout<<ans<<endl;
	      
	      
	    
	   
	    while(q--){
	        long long v;
	        int x;
	        
	        for(int j=0;j<31;j++){
	            
	            if((a[x-1]>>j)&1){
	                c[j]-=1;
	            }
	        }
	        
	        a[x-1]=v;
	        ans=0;
	        
	        for(int j=0;j<31;j++){
	            
	            if((a[x-1]>>j)&1){
	                
	                c[j]+=1;
	            }
	            
	        }
	        
	        for(int j=0;j<31;j++){
	            
	            ans+=(1<<j)*(c[j]>0);
	        }
	        cout<<ans<<endl;
	        
	        
	    }
	    
	}
	return 0;
}
