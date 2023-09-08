#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class key, class cmp = std::less<key>>
using oset = tree<key, null_type, cmp, rb_tree_tag, tree_order_statistics_node_update>;
template<class key, class value, class cmp = std::less<key>>
using omap = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;

void __print(int x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");} 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define bug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define bug(x...)
#endif

#define ll long long
#define lld double
#define all(x) x.begin(), x.end()
#define iceil(n, x) (((n) + (x) - 1) / (x))
#define gcd(a,b)	__gcd(a,b)
#define lcm(a,b)	__detail::__lcm(a,b)
#define goog(tno) cout << "Case #" << tno <<": "

ll dx[]= {-1,-1,-1,0,0,1,1,1};
ll dy[]= {-1,0,1,-1,1,-1,0,1};
const ll INF=2e18;
const ll mod=1000000007;
const ll maxn=1e5+5;

bool is_prime(ll n){
    if(n<=1) return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)  return false;
    }
    return true;
}

void solve(){
    ll n;   
    cin>>n;
    string s;   
    cin>>s;
    if(s.find('1')!=string::npos){
        cout<<1<<'\n';
        cout<<1<<'\n';
        return;
    }
    for(ll i=0;i<n;i++){
        if(!is_prime(s[i]-48)){
            cout<<1<<'\n';
            cout<<s[i]-48<<'\n';
            return;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll no=(s[i]-48)*10+(s[j]-48);
            if(!is_prime(no)){
                cout<<2<<'\n';
                cout<<no<<'\n';
                return;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}