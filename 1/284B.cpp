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

    int n,m;

    cin>>n>>m;

    map<string ,string>m1;
    string a,b;
    while(m--){

        cin>>a>>b;
        if(a.length()>b.length()){
            m1[a]=b;
            m1[b]="0";
        }
        else{
            m1[b]=a;
            m1[a]="0";
        }
    }
    string s;
    while(n--){
        cin>>s;
        if(m1[s]!="0"){
            cout<<m1[s]<<" ";
        }
        else{
            cout<<s<<" ";
        }

    }

  
     cout<<'\n';
            
      

	    

}


