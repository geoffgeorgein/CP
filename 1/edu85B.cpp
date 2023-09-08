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
   

    cin>>t;

    while(t--){

        int n;
        long long x,s=0;
        
        cin>>n>>x;
        vector<long long>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pos=0,f=0;
        sort(a.rbegin(),a.rend());

        for(int i=0;i<n;i++){
            s+=a[i];

            if(s/(i+1.0)<x){
                f=1;
                pos=i;
                break;
            }
        }
        if(pos==0){
            if(f){
                cout<<pos;
            }
            else{
                cout<<n;
            }
        }
        else{
            cout<<pos;
        }
        
         cout<<n1;

    }

 
  
}


