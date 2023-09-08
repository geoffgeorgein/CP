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
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))
#define deb(x)      cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl


const char n1='\n';
const int mod=1e9+7;





int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m,k;
    cin>>n>>m>>k;
   
    vi a(n);
    vi b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(all(a));
    sort(all(b));

 

    int i=0,j=0;
    int c=0;
  //  deb(k);
    while(i< n && j<m){

        if(abs(a[i]-b[j])<=k){
            i++;
            j++;
            c++;
        }
        else{
            if((a[i]-b[j])>k){
                j++;
            }
            else{
                i++;
            }
        }
    }
    cout<<c<<n1;
}
