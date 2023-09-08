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
     string s,d="";
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),::tolower);

    for(int i=0;i<s.length();i++){

        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'&& s[i]!='u' && s[i]!='y'){

            d+='.';
            d+=s[i];
            
        }
    }
    cout<<d<<endl;

    
    
   
     
    }
  
     

 
    
        