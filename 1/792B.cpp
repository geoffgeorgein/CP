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

long long n,n1,b;


cin>>t;
while(t--)
{
   
 cin>>n;

  for(int i=0;i<2521;i++){
      n1=n+i;
      if(!solve(n1)){
          continue;
      }
      else{
          cout<<n1<<endl;
          break;
      }
   
  
      }
  }
   
    
}

