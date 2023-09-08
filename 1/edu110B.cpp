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
	
	
	    
	    int n,t;
        cin>>t;
        
        while(t--){

            cin>>n;
            

            vector<int>e;
            vector<int>a(n);
            vector<int>o;
            long long s=0;
            
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2==0){
                    e.push_back(a[i]);
                }
                else{
                    o.push_back(a[i]);
                }
            }
            long long p=n-1;

            for(int i=0;i<e.size();i++){
                s+=p;
                p-=1;
            }
           // cout<<e.size()<<'\n';
           
            for(int i=0;i<o.size();i++){

                for(int j=i+1;j<o.size();j++){
                    if(gcd(o[i],o[j])>1){
                        s+=1;
                    }
                }

            }
            cout<<s;


            cout<<'\n';
        }
        
      

}


