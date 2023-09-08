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

    int t,a,b,x;

    cin>>t;
    while(t--){
    cin>>a>>b;

    cout<<((a^(a&b))+(b^(a&b)))<<endl;
    }
}