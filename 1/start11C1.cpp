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
    
    int t;
    cin>>t;

    while(t--){

       ll n,k;

       cin>>n>>k;

       vll a(n);

        ll s=0,ct=0,c=0;
        int mn=n,ma=0;
        vll p,p1;
       for0(i,n){
           cin>>a[i];
           s+=a[i];
           if(a[i]>(ll)0){
               ct++;
               mn=min(mn,i);
               ma=max(ma,i);
               p.pb(i);
           }

        }
        if(s==0){
            cout<<0<<n1;
            continue;
            
        }

        for(int i=0;i<p.size()-1;i++)   {

            int kk=ceil((p[i+1]-p[i]-1.0)/2);
            if(kk>0){
                p1.pb(kk);
            }
        }
        int k1=(n-ma-1)+mn;
        if(k1>0){
            p1.pb(ceil((k1+0.0)/2));
        }
       



        int ct2=0,d1=0;
       
        int nz=p1.size();
       // deb(nz);
        //for(int i=0;i<nz);i++
        for(int i=1;i<=min(n,k)&&p1.size()>0;i++){

            c=((upper_bound(all(p1),i)-p1.begin())-((lower_bound(all(p1),i))-p1.begin()));
           // deb(c);
            s+=2*(ct);
            
           ct+=((nz-ct2)*2)-c; //new 1
           ct2+=c;
           d1++;
         

       }
     //  deb(d1);
     //  deb(s);
       s+=(2*n*(max((k-d1),(ll)0)));
       cout<<s;

       
        
        
       
       cout<<n1;
  
        
        
    }
   
   
}
