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

   
    
    cin>>n>>m;

    if(m>n){
        cout<<-1;
    }
    else{
        if(n%2==0){

            int d=n/2;
            while (d%m!=0 &&d <=10){
                d+=1;
            }
            cout<<d;

        }
        else{
            int k=n;
            if(n==3){
                if(m==1 || m==2){
                    cout<<2;
                }
                else{
                    cout<<3;
                }
                cout<<endl;
               return 0;
    
                }
            
            int d=n/2;
            int p=d;
            n=2*d;
            
            while ((d%m!=0 &&d <=10) || n+1<=k){

               
                d+=1;
                n=n+1;
                if(n+1==k){
                    int i=0;
                    while(i<=p){
                        if(d%m==0){
                            break;
                        }
                    d+=1;
                    i+=1;
                    
                }
                }
            }
            cout<<d;
        }
    }


      
    cout<<endl;
    
   
     }
  
     

 
    
        