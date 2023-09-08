#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>

using namespace std;

int main(){


#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
vector<int> a; 
string str;

int t;
getline(cin,str);
istringstream is(str);  

while(is>>t) {      //
    a.push_back(t);
             
}
for(auto i=0;i<a.size()-1;i++){
    cout<<a[i]<<" ";
}
}