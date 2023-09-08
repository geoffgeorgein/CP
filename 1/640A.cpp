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

        string s;
        int len,n;

        cin>>n;

      

        int k=0;
        int p=n;
          while(p>0){
           
           int d=p%10;
           if(d>0){
               k++;
           }
           p/=10;
        }

      int x=1;
       
        cout<<k<<endl;
        int i=0;
        while(n>0){
            int d=n%10;
          
            if(d>0){
                
                cout<<d*x<<" ";

            }
            x*=10;
            n/=10;
            
        }

        cout<<endl;


    }
    
    

    
    
   
     
    }
  
     

 
    
        