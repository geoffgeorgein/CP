#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
   
    int t;
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
   
    long long l,r;
    cin>>t;

    while(t--){
        cin>>l>>r;
    if (2*l>r){
        cout<<-1<<" "<<-1<<endl;
    
    }
    else{
        cout<<l<<" "<<2*l<<endl;
    }
    
    }
   

 
}
