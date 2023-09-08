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


#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

int n;

int f=0;

cin>>n;

vector<long long>a(n);
vector<long long>b(n);
map<long long,long long>m;

for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
}
sort(b.begin(),b.end());

for(int i=0;i<n;i++){
    m[b[i]]=i;
}
for (int i=0;i<n;i++){
    a[i]=m[a[i]];
}

int l=-1;int r=-1;

for(int i=0;i<n;i++){

    if(a[i]!=i){
        l=i;
        break;
    }
}

for(int i=n-1;i>0;i--){

    if(a[i]!=i){
        r=i;
        break;
    }

}

if(l==-1 && r==-1){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1;
}
else{
    reverse(a.begin()+l,a.begin()+r+1);

    for(int i=0;i<n;i++){

        if(a[i]!=i){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1;
    }
    else{
        cout<<"no";
    }
}



cout<<endl;
  


}