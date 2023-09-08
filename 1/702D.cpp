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
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))

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

int pow1(int n,int p)
{
    int i,sum=1;
    for(i=1;i<=p;i++) sum*=n;
    return sum;
}

void build(int l,int r,vi &a,vi &d,int c=0){
    
    if(l==r){
        d[l]=c;
        return;
    }
    if(l>r){
        return;
    }
    int m=l;
    for(int i=m+1;i<=r;i++){
        if(a[i]>a[m]){
            m=i;
        }
    }
    d[m]=c;
    build(l,m-1,a,d,c+1);
    build(m+1,r,a,d,c+1);
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

       int n;
       cin>>n;

        vi a(n);
        vi d(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        build(0,n-1,a,d);

        for(int i=0;i<n;i++){
            cout<<d[i]<<" ";
        }
        cout<<n1;


   }


}
