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

      vector<int>a(n);

      int s=0;

      for(int i=0;i<n;i++){
          cin>>a[i];
          s+=a[i];
      }

      if(s==0){
          cout<<"NO";
      }
      else{
          cout<<"YES"<<endl;
          if(s>0){
              sort(a.rbegin(),a.rend());

              for(int i=0;i<n;i++){
                  cout<<a[i]<<" ";
              }
          }
          else{
              sort(a.begin(),a.end());
              for(int i=0;i<n;i++){
                  cout<<a[i]<<" ";
              }
          }
      }





        cout<<endl;


    }
    

   
     
    }
  
     

 
    
        