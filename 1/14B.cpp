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
bool issquare(int x){
        int y=sqrt(x);

        return (y*y==x);
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
        while(n--){
            int x;

            cin>>x;

            if(x%2==0 && issquare(x/2)){
                cout<<"YES";
            }
            else if(x%4==0 && issquare(x/4)){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
            cout<<'\n';
        }
        
 

}


