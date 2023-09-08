#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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

    speed;
    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	// your code goes here
	int t;
	cin>>t;
   
	while(t--){
	    
	    int n;
        cin>>n;
        vector<int>a(n);
        vector<long long>c(32);

        for(int i=0;i<n;i++){
            cin>>a[i];

            for(int j=31;j>=0;j--){

                if((a[i]>>j)&1){
                    c[j]+=1;
                    break;
                }
            }
        }
        long long ans=0;

        for(int i=0;i<32;i++){

            //cout<<c[i]<<" ";
            if(c[i]>1){
                ans+=(c[i]*(c[i]-1))/2;
            }
        }
     
  
        cout<<ans;
        cout<<'\n';

    
    }
	    

}


