#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    long long n;
    int t;
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
   
   
    cin>>t;

    while(t--){
        cin>>n;
    if (n%2==0){
        cout<<n/2<<endl;

    }
    else{
        cout<<floor(n/2)<<endl;
    }
    
    }
   

 
}
