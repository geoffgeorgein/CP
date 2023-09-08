#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>


int gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool solve(long long n1){

 long long b=n1;
 while(n1>0){
     if(n1%10!=0 && b%(n1%10)!=0){
         return false;
     }
     n1/=10;
 }
 return true;


}

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

int t;

int n;



cin>>t;
while(t--)
{
   int i,k;
 cin>>n;
 vector<int> a(n);
 for(int i=0;i<n;i++){

     cin>>a[i];
 }
 if(a[0]==a[n-1]){
 k=a[0];
 }
 else{
     if(a[0]==a[1]){
         k=a[0];
     }
     else{
         k=a[n-1];
     }

 }
for(int i=0;i<n;i++){
    if(a[i]!=k){
        cout<<(i+1)<<endl;
        break;
    }
}
   
  
      
  }
   
    
}

