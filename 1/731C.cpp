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
        int n,k,m;

        cin>>k>>n>>m;

        vi a(n);
        vi  b(m);
        vi l;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        int p=0,q=0,s=k;

       int f=0;

        while((p<n&&q<m)){

                if(s<min(a[p],b[q])){
                    f=1;
                    break;
                }

                if(min(a[p],b[q])==0){
                    s++;
                    }
                if(a[p]>b[q]){
                    l.pb(b[q]);
                //  s+=a[q];
                    q++;
                }
                else{
                    l.pb(a[p]);
                //  s+=a[p];
                    p++;
                }
            

          

        }
        //
        while(q<m){
           
                if(s<b[q]){
                    f=1;
                    break;
                }
                if(b[q]==0){
                    s++;
                }
                
                l.pb(b[q]);
                
                q++;
            
            
        }
        while(p<n){
                if(s<a[p]){
                    f=1;
                    break;
                }

                if(a[p]==0){
                    s++;
                }
                
                l.pb(a[p]);
                
                p++;
        }
        if(f==1){
            cout<<-1;
        }
        else{
            for(int i=0;i<l.size();i++){

                cout<<l[i]<<" ";
            }
        }
        cout<<n1;
    }



}
