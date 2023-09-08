#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif


int n,k1,k2,w,b,t;

cin>>t;

while (t--)

{  
    cin>>n>>k1>>k2;
    cin>>w>>b;
    //cout<<n<<" "<<k1<<" "<<k2<<endl;
    if ((floor(((2*n)-(k1+k2))/2) >=b) && floor((k1+k2)/2)>=w){

        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
return 0;
}