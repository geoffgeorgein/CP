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
//#define int         long long

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
bool powof2(int n){
    vector<int>a(32);
    int c=0;

    for(int j=0;j<=31;j++){

        if((n>>j)&1){
            c++;
        }
    }
    return (c==1);

}

int  main(){
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

        vector<ll>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll c=0;
        for(int i=0;i<n;i++){

            if(a[i]%2!=0){

                c++;
                a[i]-=1;
            }
        }
        ll d=((c+k-1)/(k));
         
         vector<ll>b(32);
        for(int i=0;i<n;i++){

            for(int j=0;j<=31;j++){

                if((a[i]>>j)&1){
                    b[j]++;
                }
            }
            
        }
       
        for(int i=0;i<32;i++){
           // cout<<b[i]<<" ";
            d+=((b[i]+k-1)/k);
        }
     

        cout<<d<<n1;
    }

   

   

}
