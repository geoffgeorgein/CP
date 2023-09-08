#include<bits/stdc++.h>

using namespace std;

bool func(map<int,int>){


}

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
       for(int i=m1.begin();i!=m1.end();i++){
           p.push_back({i->second,i->first});
       }
       sort(p.begin(),p.end());

       
        ct=0;
        int d;
      //  sort(m1.begin(),m1.end(),func);
       for(auto i=m1.begin();i!=m1.end();i++){
           ct++;
           if(ct==m1.size()){
                d=i->second;;
           }
       }
       int p1;
         for(auto i=m1.begin();i!=m1.end();i++){
           
           if(i->second==d){
                p1=i->first;
           }
       }

        cout<<ma<<"\n";
        cout<<p1<<"\n";

    }
}