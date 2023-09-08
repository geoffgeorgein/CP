#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>
#include <map>
#include <unordered_map>
 
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
 
    int main()
 
    {  
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif

    

     int t,m,n;
     
    cin>>t;

    while(t--){

    string a,b;

    cin>>a>>b;

    n=a.length();
    m=b.length();

    int ma=0;


    for(int i=1;i<=min(n,m);i++){

        for(int j=0;i+j<=n;j++){

            for(int k=0;i+k<=m;k++){

                if(a.substr(j,i)==b.substr(k,i)){
                    ma=max(ma,i);
                }
            }
        }
    }

    cout<<(n+m)-2*ma;
     

      
     cout<<endl;


    }
    

   
     
    }
  
     

 
    
        