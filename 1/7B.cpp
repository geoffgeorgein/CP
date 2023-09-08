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


    cin>>n;
    long long s=0;
    long long ma=0;
    vector<long long>a(n);
     vector<long long>b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        
        b[i]=a[i]+ma;
        
       ma=max(b[i],ma);
    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }


    cout<<endl;
    
    

}