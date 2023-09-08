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
	    
	    int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];

        }
        vector<int>pos;

        sort(b.begin(),b.end());
        int f=0;
        

        for(int i=0;i<n;i++){

            if(a[i]!=b[i]&& a[i]%b[0]>0){
             
                
               f=1;
               break;

            }
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


