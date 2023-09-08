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

int k=0;

cin>>n;
vector<int>c(32);


string s="";
int g=0;

for(int i=0;i<64;i++){
   int d= n>>i;

   if(d&1){
       s+='1';
        g=i;
   }
   else{
       s+='0';
   }
}


//cout<<s<<endl;

  cout<<int(pow(2,g))-1<<endl;


   
}
    
   

}