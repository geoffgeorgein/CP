#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

using namespace std;

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

int main() {
     #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    
    int t;
    
    cin>>t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        
        long long s=0;
        s=(abs(c-a)+abs(d-b));
        
        if(k<s){
            cout<<"NO"<<'\n';
            continue;
        }
        if(s%2==k%2){
            cout<<"YES";
            
        }
        else{
            cout<<"NO";
        }
        
        cout<<'\n';
    }
}