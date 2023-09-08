#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
speed;
    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	// your code goes here
	
   
	    int n;
        string s;

        cin>>s;
        
        vector<int>a(s.length()+1);
        a[0]=0;
        long long d=0;
        for(int i=1;i<=s.length();i++){
                if(s[i]==s[i-1]){
                    d+=1;

                }
                a[i]=d;
        }
       // a[n-1]=d;
        cin>>n;
        while(n--){
            int l,r;
            cin>>l>>r;
            cout<<a[r-1]-a[l-1]<<'\n';
        }
        

        return 0;
  

}


