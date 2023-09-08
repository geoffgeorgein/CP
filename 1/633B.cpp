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

        cin>>n;
        vector<int>a(n);
        vector<int>b;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        for(int i=0;i<n/2;i++){

            b.push_back(a[i]);
            b.push_back(a[n-i-1]);
         
            
        }
        if(n%2!=0){
            b.push_back(a[n/2]);
        }
        for(int i=n-1;i>=0;i--){
            cout<<b[i]<<" ";
        }
        cout<<n1;
    }
  


}


