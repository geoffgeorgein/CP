#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif


int t;
string s;

cin>>t;

while (t--)

{  int f=0;
    cin>>s;
    string s1=s;
    int p,q;
    sort(s.begin(),s.end());
    if (s1==s){

        cout<<"YES"<<endl;
    }

    else{
       
        p=s1.rfind("00");
        q=s1.find("11");
        if(p>-1 && q>-1 && p>q){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
   
    }


}
return 0;
}