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

    


    

    long long s=0;

    int t;
    cin>>t;
    int j=1;
    while(t--){
        

        int n,k;
        
        string s;

        long long sum=0;
    
        cin>>n>>k;

        int pos=n/2;

        cin>>s;

        for(int i=0;i<n/2;i++){

            if(s[i]-'a' >0){
                sum+=(min(k-1,s[i]-'a'));
                if(i<n/2){
                    pos=i;
                }

            }
        }
       // cout<<sum<<endl;
        if(n%2!=0){
            sum+=(s[n/2]-'a');
        }
        else{
            sum+=1;
        }
        if(pos<n/2 && n%2!=0){

            sum+=(97+k-'a');
        }

    cout<<"Case #"<<j<<":"<<" "<<sum;
    cout<<endl;
    j+=1;
    }

    

     
    }
  
     

 
    
        