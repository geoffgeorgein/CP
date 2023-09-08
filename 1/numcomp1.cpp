#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;




void primesieve(int n){


bool prime[n+1];
memset(prime,1,n+1);
prime[0]=0;prime[1]=0;
vector<int>l;
for (int i=2;i*i<=n;i++){

    if (prime[i]==1){
        l.push_back(i);

        for(int j=i*i;j<=n;j+=i){
            prime[j]=0;
        }
    }
}


cout<<(upper_bound(l.begin(),l.end(),n)-upper_bound(l.begin(),l.end(),n/2)+(n>3?1:0));



}

using namespace std;

int main(){

 #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int n,t;
    cin>>t;
    while(t--){
        
    
    cin>>n;
   
    primesieve(n);
    cout<<'\n';
    }
 

}