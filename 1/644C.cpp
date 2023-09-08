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
        int e=0,o=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e+=1;
            }
            else{
                o+=1;
            }
        }
        int f=0;
        if(e%2!=0){
            for(int i=0;i<n;i++){

                for(int j=i+1;j<n;j++){

                    if(abs(a[i]-a[j])==1){
                        f=1;
                        break;
                    }
                }
                if(f){
                    break;
                }
            }
            
        }
        else{
            f=1;
            }
        if(f==0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<n1;


     
    }
  


}


