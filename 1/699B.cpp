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

        cin>>n>>k;

        vector<int>a(n);

        int s=0,ma=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
       

        for(int i=0;i<n;i++){
            
            if(a[i]>ma){
                ma=a[i];
            }
        }
        if(ma*n<k){
            cout<<-1;
        }
        else{
            int pos=-2;
            int ans;
            for(int j=0;j<k;j++){

            
                int pos=-2;

                for(int i=0;i<n-1;i++){

                   if(a[i]<a[i+1]){

                   
                       pos=i;
                       break;
                   }
                   
                    
                }
                ans=pos+1;
                if(pos==-2){
                    break;
                }
                a[pos]++;
             
        }
        cout<<ans;
        }


        cout<<n1;
    }


}


