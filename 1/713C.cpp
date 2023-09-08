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
int a,b;

cin>>a>>b;
int p=a;
int q=b;
string s;
cin>>s;
int c=0;
int f=0;
int d=0;

//  cout<<s<<endl;
   n=s.length();


if(a%2!=0 && b%2!=0){
    cout<<-1<<endl;
    continue;
}

if(a%2!=0){

    if(s[n/2]=='?')
{
    s[n/2]='0';
    a-=1;
}    
}
if(b%2!=0){
    if(s[n/2]=='?'){

    s[n/2]='1';
    b-=1;
    }
    
}


for(int i=0;i<s.length()/2;i++){
    if(s[i]!=s[n-i-1]){
        
        if(s[i]=='0'||s[i]=='1'){
            if(s[n-i-1]=='?'){
                s[n-i-1]=s[i];
                if(s[i]=='1'){
                    b-=1;
                }
                else{
                    a-=1;
                }
            }
            else{
                f=1;
                break;
            }
          
        }
        else{
            if(s[i]=='?'){
                if(s[n-i-1]=='1'|| s[n-i-1]=='0'){
                    s[i]=s[n-i-1];
                    if(s[i]=='1'){
                        b-=1;
                    }
                    else{
                        a-=1;
                    }
                }
                else{
                    f=1;
                    break;
                }


                }
            }
        }
        else{
            if(s[i]=='?'){

                if(a>1){
                    s[i]=s[n-i-1]='0';
                    a-=2;
                }
                if(b>1){
                    s[i]=s[n-i-1]='1';
                    b-=2;
                }

            }
        }
    }

  //  cout<<s<<endl;


for(int i=0;i<s.length();i++){
    if(s[i]=='1'){
        c+=1;
    }
    if(s[i]=='0'){
        d+=1;
    }
}
if(f==1){
    cout<<-1<<endl;
    continue;
}
if(d==p && c==q){
    cout<<s<<endl;
}
else{
    cout<<-1<<endl;
}
    
}




}