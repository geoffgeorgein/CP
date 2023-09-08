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
	    
	    
        int a=0,b=0,c=0;

        string s;

        cin>>s;
        int ans=s.length();
        set<char>st(s.begin(),s.end());
        if(st.size()<3){
            cout<<0<<'\n';
            continue;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                a=i+1;
            }
            else if(s[i]=='2'){
                b=i+1;
            }
            else{
                c=i+1;
            }
            if(a!=0&&b!=0 &&c!=0){

            

            ans=min(ans,max({abs(a-b),abs(a-c),abs(b-c)}));
            }
        }
        cout<<ans+1;
      
        cout<<'\n';

    
    }
	    

}


