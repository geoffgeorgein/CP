#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>

using namespace std;

int main(){

int t,x,y,n;

#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif


  
    string s;
   

    cin>>s;
    int f=0;

    for(int i=1;i<s.length();i++){

        if(s[i]>=97){

            f=1;
            break;
        }

    }
    if(f==0){

        if(s[0]>=97){

        
        s[0]=s[0]-32;
        }
        else{
            s[0]+=32;
        }
        
        //transform(s.begin()+1,s.end(),::)
        for(int i=1;i<s.length();i++){

            s[i]=s[i]+32;
            
        }
        cout<<s;
    }
    else{
        cout<<s;
    }

    cout<<endl;
    
   

}