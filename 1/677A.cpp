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

int n,t,b,k;
string s;

cin>>t;
while(t--)
{
    
    cin>>n;
    s=to_string(n);
    k=s.length();

    b=(((n%10)-1)*10) +(k*(k+1))/2 ;
    cout<<b<<endl;

    }
}
