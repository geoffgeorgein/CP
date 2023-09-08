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
        
        int n,t,x;
        cin>>t;
        while(t--){ 

        int c=1;

        cin>>n>>x;
        vector<int>a(n);
        
       
       long long s=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        vector<int>b=a;
        int f=1;
        while(f){

            for(int i=0;i<n;i++){

                if(b[i]%x==0){
                    s+=(long long)a[i];
                    b[i]/=x;
                }
                else{
                    f=0;
                    break;
                }
            }

        }

       
      
        cout<<s<<endl;
        }   
      
    }


        
  