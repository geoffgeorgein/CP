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
	int t;
    cin>>t;
	while(t--){

    
	    
	    int n;
        cin>>n;
        int p,c;
        int p1,c1;
        int f=0;
        vector<int>a(n);
       cin>>p1>>c1;
        n-=1;
        if(c1>p1){
            f=1;
        }

        while(n--){
            cin>>p>>c;

            if(c>p || p<p1|| c<c1 ||(p-p1 <c-c1)){
                f=1;
            }
            p1=p;
            c1=c;
        }
        if(f){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
      
      

        cout<<'\n';

    }
    
	    

}


