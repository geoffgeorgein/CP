#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>

using namespace std;

int main(){

int t,x,y,n;

#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
cin>>t;
while(t--){
    cin>>x>>y>>n;

    if(n-(n%x)+y>n){
        cout<<n-(n%x)+y-x;
    }
    else{
        cout<<n-(n%x)+y;
    }
    cout<<endl;
    
    
}
}