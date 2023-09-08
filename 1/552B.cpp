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
   
    
    
        int n;
        
        cin>>n;

        vi a(n);
        mpii m1;
        for0(i,n){
            cin>>a[i];
            m1[a[i]]++;
        }

        sort(all(a));

        vi b(n);
        set<int>s;
        
        int k=m1.size()/2;
        int ct=0,d;
        for(auto i=m1.begin();i!=m1.end();i++){

            

            if(ct==k){
                d=i->F;
            }
            ct++;
        }

        for0(i,n){
            b[i]=abs(a[i]-d);
            if(b[i]!=0){
                s.insert(b[i]);
            }
        }
        int f=0;
        for0(i,n){

            if(s.size()>1){
                f=1;
               // cout<<-1;
            }
            
        }

        if(f|| m1.size()>3){
            cout<<-1;
        }
        else{
            if(m1.size()<=2&& *s.begin()%2==0){
                cout<<(*s.begin())/2;
            }
            else{
                cout<<*s.begin();
            }
            
        }


        
        cout<<n1;
    }
