#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];
 

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}


int main(){

    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

int t;
vector<long long>a;
    for(long long i=1;i<=10000;i++){

        a.push_back((i*i)*i);

    }
//for(int i=0;i<10000;i++){

   //    cout<<a[i]<<" ";

  //  }
  //cout<<a[9999];

cin>>t;
while(t--)
{
 
    long long d,n,x;
    cin>>x;

    

   int i=0;
   int j=9999;
   
   int f=0;

   while(i<=j ){
       n=a[i]+a[j];

       if(n==x){
           f=1;
           break;
       }
       if(n<x){
           i+=1;
       }
       else {
           j-=1;
       }
       

   }
   if (f==1){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
    
  
    
}
}
