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
	

    
	    
	    int n,x;
        cin>>n;
        int s1=0,s2=0;
        vector<int>a(n);
        
        for(int i=0;i<n;i++){

            cin>>a[i];
            s1+=a[i];
        }
        int f=0;
        if(s1==360){
            f=1;
            
        }
        sort(a.begin(),a.end());
        


        for(int i=n-1;i>=0;i--){
            s1-=a[i];
            s2+=a[i];

            if(s1==s2 || s1==s2%360){
                f=1;
                break;
            }
            if(s2>=360){
                s2=s2%360;
            }
        }
        if(f){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }


     
}


