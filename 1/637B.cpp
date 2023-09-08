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

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

     int t;
    cin>>t;
    while(t--){

     int n,k; 
     cin>>n>>k;
    vector<int>a(n);
    vector<int>p(n+1,0);
    vector<int>p2(n+1,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            p[i]=1;
        }
    }
    for(int i=1;i<=n;i++){
        p[i]+=p[i-1];
    }
  /*  for(int i=0;i<=n;i++){
        cout<<p[i];
    }*/
    int ans=0,pos=1;
    for(int i=0;i<n-k+1;i++){
        if(p[i+k-2]-p[i]>ans){
            ans=p[i+k-2]-p[i];
            pos=i+1;
        }
    }
    cout<<ans+1<<" "<<pos<<n1;

    }
}