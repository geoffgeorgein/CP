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
	int t,n,r;

    cin>>t;

    while(t--){

    

    cin>>n;

    vector<long long>a(n);
    long long s=0,d=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
     for(int i=0;i<n-1;i++){

         if(i==0){
             s+=a[i];
         }
         if(a[i]!=a[i+1]){
             s+=(abs(a[i+1]-a[i]));
         }
     }
     
    if(n<=1){
        cout<<a[0]<<n1;
        continue;
    }
    else{
        s+=a[n-1];
    }
    for(int i=0;i<n;i++){

        if(i==0 && a[i+1]<a[i]){
            s-=(a[i]-a[i+1]);
            continue;
        }
        if(i==n-1&&a[i]>a[i-1]){
            s-=(a[i]-a[i-1]);
            continue;
        }
        if(a[i]>a[i-1]&& a[i]>a[i+1]){
            s-=(a[i]-max(a[i-1],a[i+1]));
        }
    }
    cout<<s<<n1;

   


}
}


