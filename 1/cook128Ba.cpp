#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
     #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
    	  int n,x;
    	  cin>>n>>x;
    	  vector<int>a(n);
    	  map<int,int>l;
    	  int c=0;
    	  for(int i=0;i<n;i++){
    	      cin>>a[i];
    	      
    	      if(l[a[i]]>0){
    	          c+=1;
    	      }
    	      
    	      l[a[i]]+=1;
              	    
    	  }
    	  int p=l.size();
    	  
    	  
    	  if(c>=x){
    	      cout<<p<<endl;
    	  }
    	  else{
    	      cout<<(p-(x-c))<<endl;
    	  }
    	 
    	  
    	  
    	  
	    
	}
	return 0;
}
