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
	    int n;
	    cin>>n;
	    long long ans=0;
	    
	    vector<int>a(n);
	    vector<int>c(31,0);
	    
	    for(int i=0;i<n;i++){
	        
	        cin>>a[i];
	        
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
	}
	return 0;
}
