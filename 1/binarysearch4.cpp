#include<bits/stdc++.h>

using namespace std;

int main()

{  

     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

     int n,b;
    vector<int>a;
    cin>>n;
    for(auto i=0;i<n;i++)
    {
        cin>>b;

        a.push_back(b);
    }
    sort(a.begin(),a.end());
    int k;
   
    cin>>k; // Element to be searched
  
    if((binary_search(a.begin(),a.end(),k))){
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }
    cout<<'\n';

}