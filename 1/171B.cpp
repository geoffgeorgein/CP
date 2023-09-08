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
	// your code goes here
	
   
	
	    
	int n,t;
    cin>>n>>t;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    int sum=0;
    int l=0;

    for(int i=0;i<n;i++){

        while(l<n && sum+a[l]<=t){

            sum+=a[l];
            l++;
        }
        c=max(c,l-i);
        sum-=a[i];
    }
    cout<<c;
   

    cout<<'\n';


    
    
	    

}


