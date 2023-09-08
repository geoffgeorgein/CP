#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<string>s(n);
        string s1;
	    int c=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>s1;
	        //cout<<s[0]<<'\n';
	        
	        for(int j=0;j<m;j++){
	            if(s1[j] =='1'){
	                c++;
	            }
	            
	        }
	    }
	    if(c%2!=0){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	    
	    
	    cout<<'\n';
	}
	return 0;
}
