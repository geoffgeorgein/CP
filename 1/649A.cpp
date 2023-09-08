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

int pow1(int n,int p)
{
    int i,sum=1;
    for(i=1;i<=p;i++) sum*=n;
    return sum;
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

        int n,x;

        cin>>n>>x;

        vi a(n);
        vi p(n);
        int s=0;
        int m=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }

        if(s%x){
            cout<<n<<n1;
            continue;
        }
        int f=-1,l=-1;

        for(int i=0;i<n;i++){

            if(a[i]%x){
                f=i+1;
                break;
            }
        }
        if(f==-1){
            cout<<-1<<n1;
            continue;
        }
        l=-1;
        for(int j=n-1;j>=0;j--){

            if(a[j]%x){
                l=j;
                break;
            }
        }
        if(l==-1){

            cout<<-1<<n1;
            continue;

        }
     //   deb(f);

        int c1=min(f,n-l);
        cout<<n-c1<<n1;

    }
   
}
