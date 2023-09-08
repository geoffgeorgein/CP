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
	
	
	    
	    int n,t,k;

        cin>>t;

        while(t--){

        cin>>n>>k;
        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        int c=0;
        long long s=a[0];
        for(int i=1;i<n&& c<k;i++){

            if(a[i]>0){
                s+=a[i];
                a[i]=0;
            }else{
                break;
            }
            c+=1;
        }
        cout<<s;
        cout<<'\n';
        }
        
   
	    

}


