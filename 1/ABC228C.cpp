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
const int maxn=1e5+7;

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

// Driver function to sort the vector elements
// by second element of pairs
bool sortsec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


int powmod(int a,int n){
    int res=1;

    while(n){
        if(n%2){
            res=(res*a)%mod;
            n-=1;

        }
        else{
            a=(a*a)%mod;
            n/=2;

        }
    }
    return res;
}

bool visited[maxn];

 vector<int>ad[maxn];

void initialize(){
    
    for(int i=0;i<maxn;i++){
        visited [i]=false;
    }
}

void dfs(int x){

    visited[x]=true;
   // cout<<x<<" ";

    for(int i=0;i<ad[x].size();i++){

        if(visited[ad[x][i]]==false){
            dfs(ad[x][i]);
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
   // cout << fixed << setprecision(9); 
    int n,x;

    cin>>n>>x;
    
    vii a(n,vi (3,0));

    vi b(n);

    int s=0;

    for0(i,n){

        s=0;
        for0(j,3){

            cin>>a[i][j];
            s+=a[i][j];
        }
        b[i]=s;

    }
    vi c=b;

    sort(all(b));

    for0(i,n){

        if(b.end()-(upper_bound(all(b),c[i]+300))<x){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<n1;
    }


    
   
}
