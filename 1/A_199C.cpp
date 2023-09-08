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
        
        int n,q;

        string s;

        cin>>n;
        cin>>s;
        cin>>q;

        string d="";
        string r;
        char c;
        int f=0;

        while(q--)
        {

            int t,a,b;

            cin>>t>>a>>b;

            if(t==1){
                a-=1;
                b-=1;
                if(f==1){
                    a=(a+n)%(2*n);
                    b=(b+n)%(2*n);
                }
                
                c=s[a];
                s[a]=s[b];
                s[b]=c;
                
            }
            else{
                f=!f;
               
            }
        }
        if(f==1){
             
            d=s.substr(0,n);
            r=s.substr(n,n);
            
             s=r+d;
                
        }
       
          cout<<s;
        
        

     
        cout<<endl;
        
        
      
    }


        
  