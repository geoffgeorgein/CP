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

     int n,q;

     cin>>n>>q;
     long long x;

     vector<long long>a(n);

     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a.begin(),a.end());
     while(q--){
         cin>>x;
         int c=0;
         int f=0;

         if(binary_search(a.begin(),a.end(),x)==1){

             f=1;
             cout<<0<<n1;
         }

         
         if(f==1){
             continue;
         }
         if(x>0){
             if(x>a[n-1]){
                 f=1;
            
             }
             else{
                    c=(a.end()-upper_bound(a.begin(),a.end(),x));

             }
           

         }
         else{
              c=(a.end()-upper_bound(a.begin(),a.end(),x));
         }

       

         if(c%2==0||f==1){
             cout<<"POSITIVE";
         }
         else{
             cout<<"NEGATIVE";
         }
         cout<<n1;

     }

  
    }
