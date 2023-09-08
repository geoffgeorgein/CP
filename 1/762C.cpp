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
   
    
    int t;

    cin>>t;

    while(t--){

        string a,b,s;

        cin>>a>>s;

        int an=a.length();
        int sn=s.length();

        int i=an-1;
        int j=sn-1;

        vi l;
        int ff=0;
        while(i>=0 && j>=0){

            string p="";
            p+=s[j];

            string q;
            int d=0;

            

            if(a[i]>= s[j]){

                    if(s[j]<a[i] && ( j==0 ||s[j-1]!='1')){
                        ff=1;
                        break;
                    }
                    if(s[j]==a[i]){
                        l.pb(0);
                        i--;
                        j--;
                        continue;
                    }

                    if(s[j]=='0'){

                        d+=('9'-a[i])+1;
                        i--;
                        j-=2;
                        l.pb(d);
                        continue;
                    }

                    
                    
                    
                    

                    d+=('9'-a[i])+1;
                    d+=(s[j]-'0');
                    l.pb(d);
                    j--;


                 
            }
            else{
               // cout<<"e"<<n1;

                d+=(s[j]-a[i]);
                l.pb(d);
            }


            i--;
            j--;
        }

        //deb(ff);

        if(i<0 && j>=0){

            while(j>=0){
                l.pb(s[j]-'0');
                j--;
            }
        }
//
        if(i>=0 && j<0 ||ff){

            cout<<-1;
        }

        else{
            reverse(all(l));
            int f=0;
            for0(i,l.size()){

                if(l[i]>0){
                    f=1;
                }
                if(f==0){
                    continue;
                }

                cout<<l[i];
            }
        }


        cout<<n1;
    }

 
}