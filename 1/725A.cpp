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
        int c=0;
        vector<int>a(n);
        int ma=0,mi=101,pos1=0,pos2=0;
       // cout<<"t "<<n1;
        for(int i=0;i<n;i++){

           cin>>a[i];
           if(a[i]==n){
              
               pos1=i;
           }
           if(a[i]==1){
               
               pos2=i;
           }
        }
        if(pos1>pos2){
            swap(pos1,pos2);
        }
       
        
        cout<<min({pos1+1+n-pos2,pos2+1,n-pos1});
     
        cout<<n1;
        
  
   
        
    }
  


}


