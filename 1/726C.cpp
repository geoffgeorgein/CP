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

     int n,l=-1,f=0,c=0;
     cin>>n;
     vector<int>h(n);
      vector<int>a;
       vector<int>b;
     map<int,int>m;

     for(int i=0;i<n;i++){
         cin>>h[i];
         m[h[i]]++;
         
     } 
     sort(h.begin(),h.end());
    
         int mini=1e9+7;
         int p=-1,q=-1,pos=-1;
         for(int i=0;i<n-1;i++){
             if(h[i+1]-h[i]<mini){
                 mini=(h[i+1]-h[i]);
                 p=h[i];
                 q=h[i+1];
                 pos=i;
             }
         }
         cout<<p<<" ";
         for(int i=0;i<n;i++){

             if(i>pos+1){

             
             cout<<h[i]<<" ";
         }
         }
         for(int i=0;i<n;i++){

             if(i<pos){

             
             cout<<h[i]<<" ";
         }

         }
         cout<<q;
     


    
    cout<<n1;

    }
    }

