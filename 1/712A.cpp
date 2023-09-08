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

int n,t,b;
string s;

cin>>t;
while(t--)
{
    
    cin>>s;
    if(count(s.begin(),s.end(),'a')==s.length())
    {
        cout<<"NO"<<endl;

    }
    else{
        string s1=s+'a';
        string s2=s1;
        reverse(s1.begin(),s1.end());
        if(s2==s1){
                cout<<"YES"<<endl;
                cout<<('a'+s)<<endl;;
            }
            else{
                cout<<"YES"<<endl;
                cout<<(s+'a')<<endl;
            }
            

        }
    }
}
