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
const int maxn=1e5+5;

bool v[maxn];

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
void intitialize(bool v[maxn]){

    for(int i=0;i<maxn;i++){
        v[i]=false;
    }
}

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
   /*
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    */

    int n,a,b;


    cin>>n;
   // cout<<n<<n1;
    vector<int>l(n+1);
    vector<int>ar[maxn];

    for(int i=0;i<n-1;i++){
         cin>>a>>b;
        ar[a].pb(b);
        ar[b].pb(a);
    }
   
     
    int x;
    cin>>x;

    queue<int>q;

    q.push(1);
    v[1]=true;
    l[1]=1;

    while(!q.empty()){

        int p=q.front();
        q.pop();

        for(int i=0;i<ar[p].size();i++){

            if(v[ar[p][i]]==false){
                q.push(ar[p][i]);

                l[ar[p][i]]=l[p]+1;
                v[ar[p][i]]=true;

            }
        }

    }
    int c=0;
   // cout<<x<<n1;
    for(int i=0;i<n;i++){
       // cout<<l[i]<<" ";
        if(l[i]==x){
            c++;
        }
    }
   // cout<<n1;
    cout<<c<<n1;

   

}
