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

            cin>>n>>k;
            int x,y;
            int f=0;
            vector<int>a(n);
            long long s=0;


            vector<int>l(n),h(n);
            int i=0;
            while(i<n){
                
                cin>>x>>y;
                l[i]=x;
                h[i]=y;
                i+=1;

           }
    
           for(int i=0;i<n;i++){
               int f=0;

               for(int j=0;j<n;j++){

                   if (abs(l[i]-l[j]) +abs(h[i]-h[j])>k){

                       f=1;
                       break;
                   }

               }
             //  cout<<f<<endl;
               if(f==0){
                   cout<<1;
                   break;
               }
               if(i==n-1 &&f==1){
                   cout<<-1;
               }
           }

            cout<<endl;
        
         
        }

    
    }


        
  