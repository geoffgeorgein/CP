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
        
        int n,t,p,q;
        cin>>t;
        while(t--){ 

        cin>>p>>q>>n;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            
        }
        vector<long long>l(n);
        long long s=0;

     
        for(int i=0;i<n;i++){

            b[i]=(b[i]+p-1)/p;
            l[i]=(long long)b[i]*a[i];
            s+=l[i];
        }
       

      //  cout<<q-s+a[n-1]<<endl;
        if(q-s+*max_element(a.begin(),a.end()) >0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
     
        cout<<endl;
        
        }   
      
    }


        
  