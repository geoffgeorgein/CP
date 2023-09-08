#include<bits/stdc++.h>


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
using namespace std;

const char n1='\n';
const int mod=1e9+7;
int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
     int n,b;
    vector<int>a(n);
    cin>>n;
    for(auto i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
   
    int p=(binary_search(a.begin(),a.end(),2));
    cout<<p<<n1;
    cout<<(binary_search(a.begin(),a.end(),6));

}