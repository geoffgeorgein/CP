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

const long long fp=10007 ;
const long long fl=20011 ;


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

    

     int t;
     
    cin>>t;

    while(t--){

        
        int len,n;

        cin>>n;

      vector<long long>a(n);

      long long s=0;
      long long d=0;

      for(int i=0;i<n;i++){
          cin>>a[i];

          if(a[i]<0 && d>0){
              d=d+(long long)a[i];
              d=max((long long)0,d);
          }
          if(a[i]>0){
              d+=(long long)a[i];
          }

          
      }
      cout<<d;

      
     cout<<endl;


    }
    

   
     
    }
  
     

 
    
        