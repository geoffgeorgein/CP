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
#define setbits(x)     __builtin_popcount(x)
#define mem0(x)        memset((x), 0, sizeof((x)))
#define mem1(x)        memset((x), -1, sizeof((x)))
#define deb(x)         cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for0(i, n)   for (int i = 0; i < (int)(n); i++)            // 0 based indexing
#define for1(i, n)   for (int i = 1; i <= (int)(n); i++)           // 1 based


const char n1='\n';
const int mod=1e9+7;

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

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   // cout << fixed << setprecision(9); 
    
    int n,m;
    cin>>n;
    vll a(n);

    ll ma=0,tot=0;

    for0(i,n){
        cin>>a[i];
        tot+=a[i];
        ma=max(ma,a[i]);
    }
    ll tot1=tot;
    sort(all(a));

    cin>>m;
    
    while(m--){

        ll x,y,mn1,mn2;
        int pos1,pos2;

        cin>>x>>y;
        tot=tot1;
        ll d=0;



        pos1=lower_bound(all(a),x)-a.begin();

        pos2=pos1;
        if(lower_bound(all(a),x)!=a.end()){


         

           // deb(pos2);

            mn2=a[pos2];
           // deb(mn2);
           
           // deb(pos1);
            //deb(pos1);
            if(pos1==pos2){
                if(pos1>0){
                    pos1--;
                }
            }
            mn1=a[pos1];
            //deb(pos1);
         //   deb(mn1);
            if(abs(mn1-x)<abs(mn2-x)){

               if(x>mn1){
                   d=abs(mn1-x);
               }
                
                tot-=mn1;
                
            }
            else{
                if(x>mn2){
                     d=abs(mn2-x);
                }
               
                tot-=mn2;
                
            }

            if(tot<y){

                d+=(y-tot);
            }
            cout<<d<<n1;
            
        }
        else{

            d+=(x-ma);
            tot-=ma;
            
            if(y>tot){
                d+=(abs(y-tot));
            }

            cout<<d<<n1;

        }

    }
   
}
