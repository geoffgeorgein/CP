#include<bits/stdc++.h>
using namespace std;

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

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,q;
    string s;
    

    cin>>n>>q;
    cin>>s;
    int d=0;
    vector<int>a1(n+1,0);
     for(int i=1;i<=n;i++){

            d+=(s[i-1]-96);

            a1[i]+=d;
          
        }

    while(q--){
        int ans=0;
        int l,r;
        cin>>l>>r;

        ans=a1[r]-a1[l-1];
        cout<<ans<<n1;


    }
}