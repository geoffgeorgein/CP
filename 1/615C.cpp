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
int pow1(int n,int p)
{
    int i,sum=1;
    for(i=1;i<=p;i++) sum*=n;
    return sum;
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

     int n; 
     cin>>n;
    vector<pair<int,int>>a;

    int n2=n,d=0;

    for(int i=2;i*i<=n2;i++){
        int c=0,f=0;
        while(n%i==0){
            n/=i;
            c++;
            f=1;
        }
        if(f){
            a.pb({i,c});
            
        }
        d+=c;
        
    }
    if(n>1){
        a.pb({n,1});
        d++;
    }
    //cout<<"n "<<n<<n1;
   /* for(int i=0;i<a.size();i++){
        cout<<a[i].F<<" "<<a[i].S<<n1;
    }*/
   // cout<<n1;
    int s=1;
    if(d<4&&a.size()<3||d<6&&a.size()<2){
        cout<<"NO";
    }
    else{
        int k=0;
        cout<<"YES"<<n1;
        for(int i=0;i<a.size();i++){
            if(i==0){
                cout<<pow1(a[i].F,1)<<" ";
                a[i].S-=1;
                if(a[i].S>=2){
                    cout<<pow1(a[i].F,2)<<" ";
                    a[i].S-=2;
                }
                else{
                    cout<<pow1(a[i+1].F,1)<<" ";
                    a[i+1].S-=1;
                }
            }
           
                s*=pow1(a[i].F,max(0,a[i].S));
          //      cout<<s<<n1;
            
            
           
        }
        cout<<s<<" ";

    }
  cout<<n1;
    

    }
}