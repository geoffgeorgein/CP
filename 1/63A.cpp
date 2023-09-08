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
     int x,y,z;
     int p=0;int q=0;int r=0;

    cin>>n;

    while(n--){


        cin>>x>>y>>z;
        p+=x;
        q+=y;
        r+=z;


    }
    if(p==0 &&q==0 && r==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    

    

      
    cout<<endl;
    
   
     }
  
     

 
    
        