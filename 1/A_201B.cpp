#include<iostream>
#include <bits/stdc++.h>
#include<map>


using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int n;
    map<string,int>m;
    map<int,string>m1;
    string a,g;
    int b;

    cin>>n;
    int ma=0;
    while(n--){

    cin>>a>>b;
    

    m[a]=b;


    }
  

    for(auto i=m.begin();i!=m.end();i++){

        m1.insert({i->second,i->first});
    }
    int c=0;

    
  //  sort(m1.rbegin(),m1.rend());


    for(auto i=m1.rbegin();i!=m1.rend();i++){

         c+=1;
        if(c==2)
        {
        cout<<i->second;
        cout<<endl;
        }
       
        
    }


}