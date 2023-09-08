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
#define vii         vector<vector<int>>
#define vll         vector<ll>
#define vlll        vector<vll> 
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))
#define deb(x)      cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl

const char n1='\n';
const int mod=1e9+7;

vii dist(1000,vi (1000,mod));

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    

   int n,m;

   cin>>n>>m;

   while(m--){

       int a,b,w;

       cin>>a>>b>>w;

       dist[a-1][b-1]=0;
       dist[b-1][b-1]=0;

       dist[a-1][b-1]=w;



   }

   for(int k=0;k<1000;k++){

       for(int i=0;i<1000;i++){

           for(int j=0;j<n;j++){

               dist[i][j]=min(dist[i][j],(dist[i][k]+dist[k][j]));
           }
       }
   }
   int x,y,q;
   cin>>q;
   while(q--){
       cin>>x>>y;

       int d=dist[x-1][y-1];

       if(d==mod){
           cout<<-1;
       }
       else{
           cout<<d;
       }
       cout<<n1;
   }
   
}
