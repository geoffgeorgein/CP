#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const char n1='\n';

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

    cin>>t;

    while(t--){

        int n;
        long long l,r;
        cin>>n>>l>>r;
        
        vector<long long>a(n+1);
        long long s=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
           
        }
        long long c=0;
        sort(a.begin(),a.end());

        for(int i=1;i<=n;i++){
            if(2*a[i]>=l && 2*a[i]<=r){
                c--;
            }
        }

        int i=1,j=n,k=n;

        while(i<=n){
            
            while(k>0&&a[i]+a[k]>r){
                --k;;
            }
            
            while(j>0&&a[i]+a[j]>=l){
                    
                --j;
                    
            }
            c+=(long long)(k-j);
           
            i++;
            }
            cout<<c/2<<n1;
   
    
    }
  


}


