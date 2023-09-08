
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
    map<char,int>m1,m2;
    int l,m,n,o;

    cin>>p>>q>>r;

    n=p.length();
    m=q.length();
    o=r.length();

    for(auto i=0;i<n;i++){

        m1[p[i]]+=1;
    }
    for(auto i=0;i<m;i++){

        m1[q[i]]+=1;
    }
    for(auto i=0;i<o;i++){

        m2[r[i]]+=1;
    }
    if(m1==m2){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

    
}