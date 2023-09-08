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

    

     int n,t,m;
     int x;

    cin>>t;

    while(t--){
        cin>>x;

        if(100%x==0){
            cout<<100/x;
        }
        else{
            if(gcd(x,100)>1){
                int p=100;
                int d=x;

                for(int i=2;i*i<d;i++){

                    while(x%i==0 && p%i==0){
                        x/=i;
                        p/=i;
                       // cout<<i<<endl;
                    }
                }
               // cout<<x<<" "<<p<<endl;
                
                cout<<(p);
            }
            else{
                cout<<100;
            }
            
        }
        cout<<endl;
    }
   
     }
  
     

 
    
        