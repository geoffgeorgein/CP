#include<bits/stdc++.h>
using namespace std;

#define all(x)  (x).begin(),(x).end()
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define F          first
#define S          second

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

     int n; 
     cin>>n;
     vector<pair<int,int>>a(n);

     for(int i=0;i<n;i++){
         cin>>a[i].F>>a[i].S;
     }
     sort(all(a));
     /*for(int i=0;i<n;i++){
         cout<<a[i].first<<" "<<a[i].second<<n1;
     }

*/
    string s="";
    int c=0,d=0,f=0;
    pair<int,int>cur{0,0};

    for(int i=0;i<n;i++){

        c=a[i].F-cur.F;
        d=a[i].S-cur.S;

        if(c<0|| d<0){
            f=1;
            break;
        }
        s+=string(c,'R');
        s+=string(d,'U');

        cur=a[i];
    }
    if(f){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<n1<<s;;
    }
    
    cout<<n1;

    }
}