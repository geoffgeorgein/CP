
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){

      #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int n,ans;
    
    cin>>n;
   ans=n;
   if (n<0){
    ans=max(n/10,(n/100)*10+(n%10));
    
   }
    cout<<ans;
    }


