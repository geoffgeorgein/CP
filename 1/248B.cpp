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

    int n,m,l,r,t1;

    cin>>n;
    vector<int>a(n);
    vector<int>b;
    vector<long long>s1(n+1);
    vector<long long>s2(n+1);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    b=a;
    sort(b.begin(),b.end());
    long long e=0,d=0;

    for(int i=1;i<=n;i++){
        e+=(1LL)*a[i-1];
        d+=(1LL)*b[i-1];
        s1[i]+=e;
        s2[i]+=d;
    }

    cin>>m;
    while(m--){
        cin>>t1>>l>>r;

        if(t1==1){

            cout<<s1[r]-s1[l-1];
        }


    else{
        cout<<s2[r]-s2[l-1];
        
    }
    cout<<n1;
    }


}