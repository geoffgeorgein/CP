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
#define deb(x)      cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl

const char n1='\n';
const int mod=1e9+7;
const int maxn=1e5+5;





void intitialize(bool v[maxn]){

    for(int i=0;i<maxn;i++){
        v[i]=false;
    }
}

  vector<int>ar[maxn];
   // cout<<n<<n1;
    vector<int>l(maxn);
    bool v[maxn];

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
   
    /*ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    */
    

    int n,m,a,b,t;

    cin>>t;
    while(t--){



    cin>>n>>m;

    for(int i=1;i<=n;i++){
        ar[i].clear();
        v[i]=false;
    }
    

    for(int i=0;i<m;i++){
        cin>>a>>b;
        
        ar[a].pb(b);
        ar[b].pb(a);
    }
    
    queue<int>q;

    q.push(1);
    v[1]=true;
    l[1]=0;
    int ma=1e5+7;

    while(!q.empty()){

        int p=q.front();
        q.pop();

        for(int i=0;i<ar[p].size();i++){

            if(v[ar[p][i]]==false){
                q.push(ar[p][i]);

                l[ar[p][i]]=l[p]+1;
                v[ar[p][i]]=true;

            }
      

        }

    }
    cout<<l[n]<<n1;
  
  
   

}
}
