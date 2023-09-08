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

int n,t;
string a,b,c;

cin>>t;
while(t--)
{
 
    int d;
    cin>>n;
    if(n<2020){
        cout<<"NO"<<endl;
        continue;
    }

   d=n/2020;
   if(n-(2020*d)<=d){
       cout<<"YES"<<endl;

   }
   else{
       cout<<"NO"<<endl;
   }

    
}
}
