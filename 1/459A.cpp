#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

    int n,a,a1,a2;
    cin>>n;
   // vector<char>s;

    string s(n+1,'o');
   // cout<<s<<endl;

 //   for(int i=0;i<=n;i++){
   //     s.push_back('o');
   // }

    int i=0;
    
    s[0]=s[1]='O';
    
    a1=a2=1;
    a=2;
    while(a <= n){

        s[a]='O';
        
        a=a1+a2;
        a1=a2;
        a2=a;



        

    }
for(int i=1;i<=n;i++){
    cout<<s[i];

}


}
