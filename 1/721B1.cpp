#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
#include<cmath>

using namespace std;

int main(){

int t,x,y;

#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
cin>>t;

while(t--){



long long n;

cin>>n;

string s;
cin>>s;
int c=0;

for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
        c+=1;
    }
    
}

if(c%2==0){
    cout<<"BOB"<<endl;
}
else{
    if(c==1){
        cout<<"BOB"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;
    }

 
}



    
}

}