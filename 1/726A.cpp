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

     long long n; 
     cin>>n;
     vector<long long>a(n);
     long long s=0;

     for(int i=0;i<n;i++){
         cin>>a[i];
         s+=a[i];
              }
              if(((s+0.0)/n)==1){
                  cout<<0;
              }
              else if(((s+0.0)/n)<1){
                  cout<<1;
              }
              else{
                  cout<<(s-n);
              }

    
    cout<<n1;

    }
}