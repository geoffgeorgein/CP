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
        cin>>n;
        int f=0;
        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                f=1;
                break;
            }
        }
       // cout<<f<<endl;
        if(f==0){
            cout<<0<<endl;
            continue;
        }
        else{
            int c=1;
            if(a[0]==*max_element(a.begin(),a.end()) && a[n-1]==*min_element(a.begin(),a.end())){
                cout<<3<<endl;
                continue;
            }

            if(a[0]!=*min_element(a.begin(),a.end()) && a[n-1]!=*max_element(a.begin(),a.end())){
                c+=1;
            }
             
            
            cout<<c;
        }


        
        cout<<endl;
    }
   
     }
  
     

 
    
        