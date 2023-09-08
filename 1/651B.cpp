#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const char n1='\n';

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
	int t,n,k;
    cin>>t;
    while(t--){
        
       int n;
       cin>>n;
        vector<int>a(2*n);
        vector<int>e;
        vector<int>o;

       for(int i=0;i<2*n;i++){
           cin>>a[i];

           if(a[i]%2==0){
               e.push_back(i);
           }
           else{
               o.push_back(i);
           }
       }
        int f=0,c=0;
       if(e.size()%2!=0){
           f=1;
       }

       // cout<<"e "<<e.size()-f-1<<n1;
        for(int i=0;(e.size()>1)&&(i<(e.size()-f-1)) &&(c<n-1);i+=2){

            cout<<e[i]+1<<" "<<e[i+1]+1<<n1; 
            c+=1;

        }
        for(int i=0;(o.size()>1)&&(i<o.size()-1-f)&&(c<n-1);i+=2){

            cout<<o[i]+1<<" "<<o[i+1]+1<<n1;
            c+=1;
        }



    }
    
	
	  
    
    

}


