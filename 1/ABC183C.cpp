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

//int a[10][10];

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   // cout << fixed << setprecision(9); 
    int n,k;
    cin>>n>>k;

 //   vlll a(n+1,vll(n+1,0));
    vii a(n+1,vi (n+1,0));

    
    for0(i,n){

        for0(j,n){
            cin>>a[i][j];
        }
    }
    
     for0(i,n){

        for0(j,n){
            cout<<a[i][j]<<" ";
        }
        cout<<n1;
    }


    vi p;
    int k1=0;

    for(int i=0;i<n;i++){
        p.pb(i+1);
        cout<<p[i]<<" ";
    }
    cout<<n1;
   
    
    do{
        int ans=0;
        int ct=0;

        for(int i=0;i<n;i++){

            ans+=(a[ct][p[i]]);
            ct=p[i];
        }
        deb(ans);
        if(ans==k){
            k1++;
        }
    }
    while(next_permutation(p.begin(),p.end()));

    cout<<k1;
}