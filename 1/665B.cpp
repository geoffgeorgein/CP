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
	int t;
	cin>>t;
    
	while(t--){
	    
	    int x1,y1,z1,x2,y2,z2;
        long long sum=0;

        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;

        sum+=(long long)2*min(z1,y2);

        

            if(z1>=y2){
                z1-=y2;
                y2=0;
            }
            else{
                y2-=z1;
                z1=0;
            }
       

        if(z2>(z1+x1)){
            z2-=(z1+x1);
            sum-=(2*z2);
        }

        cout<<sum;

        cout<<'\n';


    
    }
	    

}


