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
    

        if(a==b){
            cout<<0<<n1;
            continue;
        }
        int ans=0;
        for(int i=0;i<n;i++){

            if(a[i]==b[i]){
                continue;
            }
            int p=i;
            while(p<n&&a[p]!=b[p]){
                a[p]=b[p];
                p+=2;
            }
            ans++;
        }
           
        cout<<ans<<n1;
        //cout<<a<<n1<<b;

        
    }
    
 

}


