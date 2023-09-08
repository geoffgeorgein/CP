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
        int f=0,mi=101,ma=0,z=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0){
                f=1;
            }
            if(a[i]>ma){
                ma=a[i];
            }
            if(a[i]<mi){
                mi=a[i];
            }
            if(a[i]==0){
                z=1;
            }
        } 

        if(f==1 ){
            
            cout<<"NO";
         
            
        }  
        else{
            cout<<"YES"<<'\n';
            cout<<(ma+z)<<'\n';
            if(z){
                cout<<0<<" ";
            }
            for(int i=1;i<=ma;i++){
                cout<<i<<" ";
            }
            
        }



        cout<<'\n';

    }
    
	    

}


