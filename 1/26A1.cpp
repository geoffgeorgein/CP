#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;
#ifndef ONLINE_JUDGE
vector <int>primes;
bool l[90000000];
int n=90000001;

void primesieve(){


l[0]=true;l[1]=true;
for (int i=2;i*i<n;i++){

    if (l[i]==false){

        for(int j=i*i;j<n;j+=i){
            l[j]=true;
        }
    }
}
for(auto i=0;i<n;i++){
    if(!l[i]){
        primes.push_back(i);

    }
}



}

using namespace std;

int main(){
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int k,t;
    vector<int>v;
    int c=0;
    cin>>k;
    primesieve();

    for(int i=0;i<n;i++){

        if ((primes[i]*primes[i])>k){
            break;
        }

        t=primes[i];
        for (int j=t;j<=k;j+=t){
            v[j]+=1;
        }

    }
    for(int i=0;i<=k;i++){
        if(v[i]==2){
            c+=1;
        }
    }
    cout<<c<<endl;
    }
    


