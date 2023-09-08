#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin>>t;
    while(t--){
             long long int n; 
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i < n; ++i) 
        cin >> a[i];
    long long int ans=0;
    for(int i=0;i<n;i++)
    ans=ans | a[i];
    for(int i=1;i<n;i++)
    {a[i]+=a[i-1];
    ans=ans | a[i];
    }
    cout<<ans<<endl;

    }
}