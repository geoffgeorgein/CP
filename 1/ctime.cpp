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
	    
	    int n,k,f;
        cin>>n>>k>>f;

        vector<pair<int,int>>a;


        while(n--){

            int x,y;
            cin>>x>>y;

            a.push_back({x,y});


        }

        sort(a.begin(),a.end());

        long long ans=0;
        int pre=0;

        for(auto i=a.begin();i!=a.end();i++){

            if(i->first>pre){
                ans+=(i->first-pre);
                pre=i->first;
            }
            if(i->second > pre){
                
                pre=i->second;
            }


        }
        ans+=(max(0,f-pre));

        
        if(ans>=k){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        


        cout<<'\n';


    
    }
	    

}


