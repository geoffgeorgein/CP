#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const int mod=1e9+7;


int main() {

    speed;
    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    // your code goes here
    
    
        
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>m;
         map<int,int>m1;

        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]+=1;
        }
        for(auto i=m.begin();i!=m.end();i++){

            m1[i->second]=i->first;
        }
        int c=0;
        int k=m1.size();
        for(auto i=m1.begin();i!=m1.end();i++){
            c+=1;
            //cout<<i->first<<" ";
            if(c==k){
                cout<<i->first;
            }
        }

       

    
    
        

}


