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

    

     int n,t;
     long long p,a,b,c;
    cin>>t;

    while(t--){
       
       cin>>p>>a>>b>>c;

       a=(((a+p-1)/a)*a)-p;
       b=(((b+p-1)/b)*b)-p;
       c=(((c+p-1)/c)*c)-p;

    
        cout<<min(a,min(b,c))<<endl;
       
    
   
     }
    }
  
     

 
    
        