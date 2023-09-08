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
	int t,n,k;
    cin>>n>>k;
    int d=0;
	vector<int>c(32,0);

    for(int i=0;i<32;i++){

        if((n>>i)&1){

            d+=1;
            c[i]+=1;
        }
    }
    if(k>n || k<d){
        cout<<"NO";

    }
    else{
        
        cout<<"YES"<<'\n';
        vector<int>ans(k,1);
        n-=k;

        for(int i=0;i<k;i++){

            while(n>=ans[i]){
                n-=ans[i];
                ans[i]*=2;
            }
        }
        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }


    }
    
	  
        cout<<'\n';

    
    
	    

}


