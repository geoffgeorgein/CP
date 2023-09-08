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
        vector<int>b;
        vector<int>c;
        int k=0;
        int f=0;
        int h=0;

        for(int i=0;i<n;i++){

            cin>>a[i];
            if(a[i]<=0){
                b.push_back(abs(a[i]));
                f=1;
            }
            else{
                c.push_back(a[i]);
                h=1;
            }

        }
        if(f==0){
            cout<<max(int(b.size()),1)<<endl;
            continue;
        }
        if(h==0){
            cout<<(b.size())<<endl;
            continue;
        }
        sort(b.begin(),b.end());

       int mini=2e9;

        for(int i=0;i<b.size()-1;i++){

            
            mini=min(mini,abs(b[i]-b[i+1]));
           
        }
        for(int i=0;i<c.size();i++){

            if(c[i]<=mini){

                k+=1;
                break;
            }
        }
        cout<<b.size()+k;



        cout<<endl;


    
    }
	    

}


