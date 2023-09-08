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
    
     int n,t,b;
    
    cin>>t;
    while(t--){
        
        cin>>n;
        vector<int>a(n);
        vector<int>e;
        vector<int>o;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e.push_back(a[i]);
            }
            else{
                o.push_back(a[i]);

            }
        }
    

        for(int i=0;i<o.size();i++){
            cout<<o[i]<<" ";
        }
        for(int i=0;i<e.size();i++){
            cout<<e[i]<<" ";
        }
        cout<<endl;
        

    }
   

}