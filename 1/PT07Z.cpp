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


vi ar[10001];
int v[10001];
int maxd=-1,maxnode;

void dfs(int node,int d){

    v[node]=1;

    if(d>maxd){
        maxd=d;
        maxnode=node;
    }

    for(int c:ar[node]){

        if(v[c]==0){
            v[c]=1;
            dfs(c,d+1);
        }
    }


}

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;

    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;

        ar[a].pb(b);
        ar[b].pb(a);
    }
    

    dfs(1,0);
    maxd=-1;

    for(int i=0;i<n;i++){
        v[i]=0;
    }

    dfs(maxnode,0);

    cout<<maxd<<n1;
   
   
}
