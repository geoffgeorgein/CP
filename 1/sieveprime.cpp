#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;
#ifndef ONLINE_JUDGE



void primesieve(int n){


bool prime[n+1];
memset(prime,1,n);
prime[0]=0;prime[1]=0;
for (int i=2;i*i<=n;i++){

    if (prime[i]==1){

        for(int j=i*i;j<=n;j+=i){
            prime[j]=0;
        }
    }
}
for(auto i=0;i<n;i++){
    if(prime[i]){
        cout<<i<<" ";

    }
}
cout<<endl;


}

using namespace std;

int main(){
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int n;
    cin>>n;
   
    primesieve(n);
 

}