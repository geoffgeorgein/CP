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
	    
	    int n,k;
        cin>>n>>k;

        if(n>k){

           

            if(n%2!=k%2){

                cout<<1;

            }
            else{
                cout<<0;
            }
            
        }
        else{

            
        cout<<abs(n-k);
        }


	
        cout<<endl;
    
    }
	    

}


