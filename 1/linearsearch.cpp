#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    
     int n,b,k;
     int c=0;
    vector<int>a;
    cin>>n>>k;
    for(auto i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    //sort(a.begin(),a.end());
    for(auto i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
     for(auto i=0;i<n;i++){
        if(a[i]==k){
            cout<<"YES"<<endl;
            c=1;
        }
    a.pop_front();    
    }
    if (c==0){
        cout<<"NO";
    }
  

}