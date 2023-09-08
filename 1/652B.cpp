#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

using namespace std;

const int mod=1e9+7;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int arr[], int n)
{
    // Initialize result
    int ans = arr[0];
 

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

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
        string s;

        cin>>s;
        int pos0=n;
        int pos1=n;
        string r="";

        for(int i=n-1;i>-1;i--){
            if(s[i]=='0'){
                pos0=i;
                break;
            }
        }
        if(pos0<n){
            
            for(int i=0;i<pos0;i++){

                if(s[i]=='1'){
                    pos1=i;
                    break;
                }
            }
        }
        for(int i=0;i<pos1;i++){
            r+=s[i];
        }
        if(pos1<pos0){
            for(int i=pos0;i<n;i++){
                r+=s[i];
            }
        }
        if(pos0==n){
            for(int i=pos1;i<n;i++){
                r+=s[i];
            }
        }

    cout<<r;

        
        cout<<'\n';
            
        }
        

  
    
    
	    

}


