#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){
           #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

    int a,b,x,y,t;

    cin>>t;

    while(t--){

    cin>>x>>y>>a>>b;

    cout<<(((y-x)%(a+b)==0)?((y-x)/(a+b)):(-1))<<endl;
}
}