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
#define itr         ::iterator
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))
#define deb(x)      cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl

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
    
    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int c0=0,c1=0;
        int ans=9;
        for(int i=0;i<10;i++){

            if(i%2==0){
                c0+=(s[i]!='0');
            }
            else{
                c1+=(s[i]=='1');
            }

            if(c0>c1+(10-i)/2) {
                ans=min(ans,i);
            }

            if(c1>c0+(9-i)/2) {
            ans=min(ans,i);
         }
        }

        c0=0;
        c1=0;

        for(int i=0;i<10;i++){

            if(i%2==0){
                c0+=(s[i]=='1');
            }
            else{
                c1+=(s[i]!='0');
            }
            if(c0>c1+(10-i)/2){
                ans=min(ans,i);
            }
            if(c1>c0+(9-i)/2) {
                ans=min(ans,i);
            }
        }

            cout<<ans+1<<n1;
        
    }
   
   
}
