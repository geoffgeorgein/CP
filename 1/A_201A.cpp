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
        
      
        
        
        int t,a,b,c;

        vector<int>v;

        cin>>a>>b>>c;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(),v.end());


        if(v[1]-v[0]==v[2]-v[1]){

            cout<<"Yes";
        }
        else{
            cout<<"No";
        }

        
     
        cout<<endl;
        
        
      
    }


        
  