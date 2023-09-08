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
    int n,x;
    cin>>n>>x;
    int c=0;

    for(auto i=1;i<=n;i++){

        if(x%i==0 && x/i<=n){
        c+=1;
        }
    }
    cout<<c;
    


}