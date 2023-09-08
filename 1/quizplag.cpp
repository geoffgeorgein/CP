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
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    vector<int>a(k);
	    map<int,int>m1;
	    vector<int>b;
	    
	    for(int i=0;i<k;i++){
	        cin>>a[i];
	        
	        m1[a[i]]+=1;
	    }
	    for(auto i=m1.begin();i!=m1.end();i++){
	        
	        if(i->first <=n && i->second >1 ){
	            b.push_back(i->first);
	        }
	    }
	    cout<<b.size()<<" ";
	    for(int i=0;i<b.size();i++){
	        cout<<b[i]<<" ";
	    }
	    cout<<'\n';
	        
	    
	    
	    
	    
	}
	return 0;
}
