#include<bits/stdc++.h>

using namespace std;


int main(){

      #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){

        int x,y,n;
       // cin>>x>>y;
       cin>>n;
       vector<pair<int,int>>p;
       vector<int>a(n);
       map<int,int>m1;
       int ct=0,ma=0;;
       for(int i=0;i<n;i++){
           cin>>a[i];
           m1[a[i]]++;
           ma=max(ma,a[i]);
           

       }
       for(auto i=m1.begin();i!=m1.end();i++){
           int q1=i->first;
           int q2=i->second;
           p.push_back({i->second,i->second});
       }
       sort(p.rbegin(),p.rend());
        ct=0;
        int p1=p[0].second;
        int f1=p[0].first;
        for(int i=0;i!=p.size();i++){
            if(p[i].second==p1){
                f1=p[i].first;
            }
        }
       

        cout<<ma<<"\n";
        cout<<f1<<"\n";

    }
}