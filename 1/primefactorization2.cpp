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

    int n;

    cin>>n;

    for(int i=2;i*i<=n;i++){

        if(n%i==0){
            int c=0;
            while(n%i==0){

                n/=i;
                c+=1;
            }
            cout<<i<<"^"<<c<<" ";
        }

    }
    if (n>1){
        cout<<n<<" "<<1;
    }
}