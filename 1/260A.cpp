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
    map<int,int>m;
    int f=0;
	while(t--){
	    
	    int a,b;
        
        cin>>a>>b;

        if(a>b){
            f=1;
            break;
        }


    }
    
  
    if(f==1){
        cout<<"Happy Alex";
    }
    else{
        cout<<"Poor Alex";
    }

    cout<<'\n';
	    

}


