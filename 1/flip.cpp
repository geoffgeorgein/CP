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
	int t,n,k;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;


        n=a.length();
        vector<int>e;
        vector<int>o;

        if(a==b){
            cout<<0<<n1;
            continue;
        }

        for(int i=0;i<n;i++){

            if(a[i]!=b[i]){
                if(i%2==0){
                    e.push_back(i);
                }
                else{
                    o.push_back(i);
                }
            }
        }
        int p=0,q=0,ans=0;
        for(int i=0;i<e.size()-1;i++){

            if(e[i+1]-e[i]>2){
                p+=1;
            }
            
        }
        if(e.size()>0){
            ans+=max(p,1);
        }
        
        for(int i=0;i<o.size()-1;i++){

            if(o[i+1]-o[i]>2){
                q+=1;
            }
            
        }
         if(o.size()>0){
            ans+=max(q,1);
        }
        cout<<ans<<n1;
        //cout<<a<<n1<<b;

        
    }
    
 

}


