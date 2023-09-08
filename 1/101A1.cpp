#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

    string p,q,r;
    

    cin>>p>>q>>r;

    p+=q;
    sort(p.begin(),p.end());
    sort(r.begin(),r.end());

    if(p==r){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

    
}