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

int n,t,b;

cin>>t;
while(t--)
{
    
    cin>>n;
    vector<int>a(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=*min_element(a.begin(),a.end());

    

    cout<<(n-count(a.begin(),a.end(),m))<<endl;

}
}
