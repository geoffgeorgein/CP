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

	    int k;
        long long n;
        
        cin>>n>>k;

        vector<long long>a(k);
        long long m;
        int p=-1;

        for(int i=0;i<k;i++){
            cin>>a[i];

            if(i==0){
                m=n%a[i];
                p=i+1;
            }

            if(n%a[i]<m){
                m=n%a[i];
                p=i+1;

            }


        }
      
        

        cout<<p<<" "<<n/a[p-1];

      
        cout<<'\n';
            
      
    
    
	    

}


