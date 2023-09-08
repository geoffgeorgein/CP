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
	    
	    int n,a,b,x,y;
        cin>>a>>b>>x>>y>>n;

        

        int p=max({a-n,0,x});
        int q=max({b-n,0,y});

        if(p<=q){
            int t=a;
            a=p;
            n-=(t-a);

            b=(max({0,b-n,y}));
        }
        else{

            int t=b;
            b=q;
            n-=(t-b);

            a=max({0,a-n,x});

        }
        //cout<<a<<" "<<b<<'\n';
        cout<<(long long)a*b;


        cout<<endl;

    
    }
	    

}


