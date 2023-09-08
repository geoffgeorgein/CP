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
	    
	    int k;
	    
	    cin>>k;
	    int f=0;
	    
	    while(k--){
	        string s;
	        cin>>s;
	        int n=s.length();
	      //  cout<<s<<" "<<n;
          //cout<<s<<" ";
	        
	            
	            if(s[0]>=97 && s[0]<=109){
	                
	                for(int i=1;i<n;i++){
	                    
	                    if(s[i]<97 || s[i]>109 ){
	                        f=1;
	                        break;
	                    }
	                }
	            }
	            else if(s[0]>=78 && s[0]<=90)
	            {
	                for(int i=1;i<n;i++){
	                    
	                    if(s[i]<78 || s[i]>90 ){
	                        f=1;
	                        break;
	                    }
	                }
	            }
	        
	        else{
	            f=1;
	            
	        }
	        
	        
	    }
        //cout<<'\n';
	    if(f==1){
	        cout<<"NO"<<'\n';
	    }
	    else{
	        cout<<"YES"<<'\n';
	    }
	    
	    
	}
	return 0;
}
