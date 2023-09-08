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

    int n,q,m,a,b;


    cin>>q;

    while(q--){

    
    

    cin>>n>>m;


   // cout<<n<<n1;
    vector<int>l(n+1,-1);
    vector<vector<int>>ar(n);
    vector<bool>v(n+1,false);

    for(int i=0;i<m;i++){
         cin>>a>>b;
        // cout<<a<<" "<<b<<n1;
        ar[a-1].pb(b-1);
        ar[b-1].pb(a-1);
    }
   
     
    int x;
    cin>>x;
   // cout<<x<<n1;

    queue<int>q;
    x-=1;
    q.push(x);
    v[x]=true;
    l[x]=0;

    while(!q.empty()){

        int p=q.front();
        q.pop();

        for(int i:ar[p]){

            if(v[i]==false && l[i]==-1){
                q.push(i);

                l[i]=l[p]+1;
                v[i]=true;

            }
        }
    }/*
    for(int i=0;i<n;i++){
        cout<<l[i]<<" ";
    }
    cout<<n1;*/
    for(int i=0;i<n;i++){

        //cout<<l[i]<<" ";

        if(l[i]==-1){
            cout<<-1<<" ";
        }
        else if(l[i]!=0){
            cout<<6*l[i]<<" ";
        }

    }
    cout<<n1;


   

}
}
