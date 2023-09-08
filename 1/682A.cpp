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
    bool a[n+1];
    memset(a,1,n);

    for(auto i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}

