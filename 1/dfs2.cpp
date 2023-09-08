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
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))

const char n1='\n';
const int mod=1e9+7;

vector<int>adj[10];
bool visited[10];

void dfs(int x){

    visited[x]=true;
  //  cout<<x<<" ";

    for(int i=0;i<adj[x].size();i++){

        if(visited[adj[x][i]]==false){
            dfs(adj[x][i]);
        }
    }



}

void initialize(){
    
    for(int i=0;i<10;i++){
        visited [i]=false;
    }
}

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
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
    initialize();
    int c=0;

    for(int i=1;i<=nodes;i++){

        if(visited[i]==false){
            dfs(i);
            c++;
            
        }
    }
   cout<<c;

}
