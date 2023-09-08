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
    cout<<"Enter number to be searched"<<'\n';
    cin>>k;
    for(auto i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<(binary_search(a.begin(),a.end(),2))<<endl;
    cout<<(binary_search(a.begin(),a.end(),6));

}