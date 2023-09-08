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
	
	
	    
	    int n,k;
        cin>>n>>k;
        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        int c=0;
        int p;
        int m=0;
        for(int i=0;i<n&&c<k;i++){

            c+=1;
            p=a[i];
            if(i!=0 && a[i]!=a[i-1]){
                m=max(m,c-1);
            }

        }
        if(k==0){
            p=a[0];
            if(p>1){
                cout<<1<<'\n';
                return 0;
            }
        }
        int d=upper_bound(a.begin(),a.end(),p)-lower_bound(a.begin(),a.end(),p);

       // cout<<d<<'\n';
      if(d>k-m){
          cout<<-1;
      }
      else{
          cout<<p;
      }
      

        cout<<'\n';

    
    
	    

}


