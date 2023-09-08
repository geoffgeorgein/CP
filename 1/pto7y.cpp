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
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))

const char n1='\n';
const int mod=1e9+7;

vi adj[10001];
int visited[10001];

void dfs(int x){

    visited[x]=1;
   // cout<<x<<" ";

    for(int i: adj[x]){

    

        if(visited[i]==0){
            dfs(i);
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
    cout.tie(0);

  
   int edges,nodes,x,y;

   cin>>nodes>>edges;

    for(int i=0;i<edges;i++){

        cin>>x>>y;

        adj[x].pb(y);
        adj[y].pb(x);

    }
   
    int c=0;

    for(int i=1;i<=nodes;i++){

        if(visited[i]==0){
            dfs(i);
            c++;
            
        }
    }
    if(c==1&&edges==nodes-1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<n1;

}
