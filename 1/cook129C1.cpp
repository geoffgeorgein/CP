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
	    
	    int g,p;
	    vector<int>a(10);
	    long long s=0;
	    int c=0;
	    
	    cin>>g>>p;
        //cout<<g<<" "<<p<<endl;
	    for(int i=0;i<=9;i++){
	        cin>>a[i];
	    }
	    int i=9;
        
        for(int i=9;i>g-1;i--){

            c+=(a[i])/p;
            a[i-1]+=a[i]%p;
        }

        cout<<c+1<<" "<<c+(a[g-1]+p-1)/p<<endl;

    }
	    

}


