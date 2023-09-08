#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>


int gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

int t,n;

cin>>t;
while(t--){
    cin>>n;
    int a=4;
    int b=6;
    int c=0;

    if(n==1){
        cout<<a<<endl;
    }
    if(n==2){
        cout<<a<<" "<<b<<endl;
    }
    else{

    
    cout<<a<<" "<<b<<' ';
    for(auto i=0;i<n-2;i++){
        
        c=b+4;
        b=c;
        cout<<c<<" ";
    }
    cout<<endl;
}
}
}

