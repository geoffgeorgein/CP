
#include<bits/stdc++.h>


#define deb(x)         cout << #x << "=" << x << endl

using namespace std;

int main(){

    int n,mx1=0,mx2=0;

    string s;
    char p='',q='';

    map<char,int>m1;

    cin>>s;

    int n=s.length();

    for(int i=0;i<n-1;i++){

        if(s[i]==s[i+1]){

            m1[s[i]]++;

            if(i==n-1){
                
                if(m1[s[i]]>mx1){
                    mx2=mx1;
                    mx1=m1[s[i]];
                    p=s[i];

                }
                
            }
        }
        else{
            if(m1[s[i]]>mx1){
                mx2=mx1;
                mx1=m1[s[i]];
                p=s[i];

            }

        }
    }
    cout<<p;
}