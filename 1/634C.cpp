#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
#include<cmath>
#include<map>

using namespace std;

int main(){

int t;

#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
cin>>t;

while(t--){



int n;
cin>>n;

vector<int>a(n);
map<int,int>m;

for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]+=1;
}


int ma=0;

for(auto i=m.begin();i!=m.end();i++){

    if(i->second > ma){
        ma=i->second;
    }
    //cout<<m[i]<<" ";
}
//cout<<endl;
//cout<<ma<<" "<<m.size()-1<<endl;
if(ma>m.size()-1){

    int ml=ma;
    int md=m.size()-1;
    if(ml-md>=2){
        ml-=1;
        md+=1;
    }
     //cout<<ml<<" "<<md<<endl;
    

    cout<<min(ml,md);
}
else{
    cout<<min(ma,int(m.size()-1));
}
cout<<endl;



    
}




}