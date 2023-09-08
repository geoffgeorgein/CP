#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>

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
	    
	    int n,p;
        cin>>n;
	    vector<int>a(n);
        
        map<int,int>m;
	    
	    
	   int f=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
            m[a[i]]+=1;

            if(m[a[i]]>1){
                f=1;
            }
            
	    }

	    
      
            if(f==0){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        
        cout<<endl;
    
    }
	    

}


