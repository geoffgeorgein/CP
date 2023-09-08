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
#define mpii        map<int,int>
#define mpll        map<ll,ll>
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))
#define deb(x)      cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl

const char n1='\n';
const int mod=1e9+7;

#define maxn 100001
int prime[maxn];

void sieve(){
    
    for(int i=1;i<maxn;i++){
        prime[i]=i;

    }
    for(int i=0;i<20;i++){
        cout<<prime[i]<<" ";
    }
    cout<<n1;


    for(int i=2;i<maxn;i++){

        if(prime[i]==i){

            for(int j=i;j*j<=maxn;j+=i){

                if(prime[j]==j){
                    prime[j]=i;
                }
            }
        }
    }
}

vi fact(int x){
    vi p;
     while(x!=1){

        p.pb(prime[x]);
        x/=prime[x];

    }
    return p;

}

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    


    int x;
    cin>>x;

    sieve();
    vi l=fact(x);
    cout<<prime[x]<<n1;
   

    for(int i=0;i<(l.size());i++){

        cout<<l[i]<<" ";


    }


    cout<<n1;
    
   
   
}
