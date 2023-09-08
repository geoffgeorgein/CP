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
        cin>>n;

        int c=0;
        int mi;

        vector<int>a(n);

        for(int i=0;i<n;i++)
       {
           cin>>a[i];
           
       }
       mi=*min_element(a.begin(),a.end());

        for(int i=0;i<n;i++){

            if(a[i]==mi){
                c+=1;
            }
        }
        cout<<n-c;
        cout<<endl;


    
    }
	    

}


