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
	
   

	    
	    int a,b;
        cin>>a>>b;

        a-=1;
        int s=b;
        if(b>=a){
            cout<<min(s,a);
            return 0;
        }
        if(a+1-b>0){

            int n=a+1-b;
            s+=((n*(n+1))/2)-1;
        }


        cout<<s;

        cout<<'\n';


  

}


