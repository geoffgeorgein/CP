#include<bits/stdc++.h>
using namespace std;

#define all(x)      (x).begin(),(x).end()
#define rall(x)     x.rbegin(),x.rend()
#define pb          push_back
#define ppb         pop_back
#define pf          push_front
#define ppf         pop_front
#define F           first
#define S           second
#define ll          long long
#define vi          vector<int>
#define vd          vector<double>
#define vf          vector<float>
#define vii         vector<vector<int>>
#define vll         vector<ll>
#define vlll        vector<vll> 
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define mpii        map<int,int>
#define mpll        map<ll,ll>
#define itr         ::iterator
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))
#define deb(x)      cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for0(i, n)   for (int i = 0; i < (int)(n); i++)            // 0 based indexing
#define for1(i, n)   for (int i = 1; i <= (int)(n); i++)           // 1 based


const char n1='\n';
const int mod=1e9+7;
const int maxn=1e5;



 vll fact(ll x){
     vll res;
     for(int i=2;i*i<=x;i++){

         while(x%i==0){
             x/=i;
             res.pb(i);

         }
     }
     if(x>1){
         res.pb(x);
     }
     return res;
     
 }

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   // n,m;

   ll n,m;
   cin>>n>>m;
    vll b(maxn);
    vector<bool> f(maxn,true);
    vll a(n);
   for0(i,n){
       cin>>a[i];

   }
   for0(i,n){

   vll l=fact(a[i]);

   for(auto &j:l){

       if(f[j]){

           for(int k=j;k<=maxn;k+=j){
               f[k]=false;
           }
       }

   }

   }
   vll res;
   for1(i,m){
       if(f[i]){
           res.pb(i);
       }

   }
   cout<<res.size()<<n1;
    for(int i=0;i<res.size();i++){

        cout<<res[i]<<n1;
    }
   
    
    
    
   
}
