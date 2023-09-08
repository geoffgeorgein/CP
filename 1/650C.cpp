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
     string s;

     cin>>n>>k;
     cin>>s;
     int c=0;
     vector<int>a(n+1);

     for(int i=1;i<=n;i++){
         if(s[i-1]=='1'){
             c++;

         }
         a[i]=c;
     }
     if(n==1){
         cout<<1<<n1;
         continue;
     }
     if(c==0){
         if(n%k==0){
             k++;
         }


         cout<<max(1,n/(k));
     }
     else{
         int d=0;
         for(int i=1;i<=n-k-1;i++){
             if(a[i+k+1]-a[i]==0){
                d++;
                if(i==1&&a[i]==0){
                    d++;
                }
                i+=k;


             }


         }
         cout<<d;


     }



    
    cout<<n1;

    }
}