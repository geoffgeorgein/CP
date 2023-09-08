#include<bits/stdc++.h>
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

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

     int t;
    cin>>t;
    while(t--){

     int n,k;
     cin>>n>>k;

     if(n<=k){
         cout<<1;
     } 
     else{
         int ans=n;
         for(int i=1;i*i<=n&&i<=k;i++){

             if(n%i==0){
                 ans=min(ans,n/i);
                 if(n/i<=k){
                     ans=min(ans,i);
                 }
             }

         }
         cout<<ans;
     }

    
    cout<<n1;

    }
}