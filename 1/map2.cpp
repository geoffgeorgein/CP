#include<iostream>
#include <bits/stdc++.h>
#include<map>


using namespace std;

int main()
{

    map<int,int>m,m1;

    m.insert({1,10});
    m.insert({2,30});
    m.insert({3,20});
    m.insert({4,50});
    m[1]=15;
    m[6]=45;

    for(auto i=m.begin();i!=m.end();i++){

        m1.insert({i->second,i->first});
    }

    for(auto i=m1.begin();i!=m1.end();i++){
        cout<<i->second<<" "<<i->first;
        cout<<endl;
    }


}