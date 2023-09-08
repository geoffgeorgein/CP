#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>

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
        
        int t,n,k;
        

        cin>>t;


        while(t--){

            int arr[3];
            int n,k;
            cin>>n>>k;

            if(n%2!=0){
                cout<<1<<" "<<n/2<<" "<<n/2;
            }
            else if(n%4==0){
                cout<<n/2<<" "<<n/4<<" "<<n/4;
            }
            else{
                cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<2;
            }
            
           
 
            cout<<endl;
        
         
        }

    
    }


        
  