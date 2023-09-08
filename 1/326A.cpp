#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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

int main() {

    speed;
    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	// your code goes here
	int t;
    int s=0,c=0,d=0,mi=101;
    int n,a,p;
    cin>>t;
    n=t;
    vector<pair<int,int>>b;
    while(t--){

      
      cin>>a>>p;

      
      b.push_back({a,p});
      s+=a;


}
    int q=1e9+7;
    //cout<<s<<" "<<d<<n1;
    for(auto i=b.begin();i!=b.end();i++){

            mi=min(mi,i->second);
            q=min(q,c+(mi*(s-d)));
            c+=(i->first*mi);
            d+=i->first;

           // cout<<q<<n1;

        
    }
    cout<<min(q,c)<<n1;
}


