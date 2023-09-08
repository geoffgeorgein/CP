#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>
#include<queue>
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
        cin>>n;
        vector<int>a(n);
      
       
        int c=0,p=0,m=0,f=0;
        int s=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0;i<n;i++){
            int r=s;

            for(int j=i;j<n;j++){

                if(a[j]==0){
                    r+=1;
                }
                else{
                    r-=1;
                }

                m=max(m,r);
            }
        }
            

        
        cout<<m;


        cout<<'\n';

        }



