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
        vector<int>a(n);
        int ma=0;
        int pos=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>ma){
                ma=a[i];
                
            }
        }
        int f=0;

        for(int i=0;i<n;i++){

            if(a[i]==ma){
                if(i<n-1 && a[i]>a[i+1]){
                    pos=i;
                    f=1;
                }
                if(i>0 && a[i]>a[i-1]){
                    f=1;
                    pos=i;
                }

            }
        }
        if(f==1){
            cout<<pos+1;
        }
        else{
            cout<<-1;
        }
        cout<<endl;


    
    }
	    

}


