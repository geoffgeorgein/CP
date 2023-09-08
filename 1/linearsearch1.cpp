#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
     int n,b,k;
     int c=0;
    
    cin>>n>>k; // no of elements and element to be searched

    vector<int>a(n);

    for(auto i=0;i<n;i++)
    {
        cin>>a[i];      //inputting elements
    }
   
     for(auto i=0;i<n;i++){
        if(a[i]==k){
            cout<<"YES"<<endl;
            c=1;
        }
     
    }
    if (c==0){
        cout<<"NO";
    }
  

}