#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
	// your code goes here
	long long b,n,q;
	cin>>n;
	set<pair<long long,long long>>a;
	
	
	for(long long i=1;i<n+1;i++){
	    cin>>b;
	    a.insert({i,b});
	}
	
	
	cin>>q;
	while(q--){
	    
	    long long s=0;
	    long long x,k;
	    cin>>x>>k;
	    
	    auto it=a.lower_bound({x,0});
	    
	   while(it!=a.end() && k>0){
	       
	       if(it->second>k){
	           
	           s+=(k*(it->first-x));
	           
	           a.insert({it->first-x,it->second-k});
	           k=0;
	           a.erase(it);

	        
	           
	           
	       }
	       else{
	           s+=(it->second*(it->first-x));
	           k-=it->second;
	           auto itr=it;
	           it++;
	           a.erase(itr);
	       }
	       
	       
	   }
	   cout<<s<<endl;
	        
	  
	    
	}
	
	return 0;
}
