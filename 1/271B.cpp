#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>
#include <map>
 
using namespace std;
const int mod=1e9+7;
 
    int main()
 
    {  
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif

     int t;

     int n,m;

     vector<int>d;
     
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector<int>q(m);
    for(int j=0;j<m;j++){
        cin>>q[j];
    }
    d.push_back(1);
    for(int i=0;i<n;i++){
        d.push_back(a[i]+d[i]);
    }
   
    for(int i=0;i<m;i++){
        cout<<(upper_bound(d.begin(),d.end(),q[i]))-d.begin()<<endl;
    }
  //  cout<<endl;


 
    }
        