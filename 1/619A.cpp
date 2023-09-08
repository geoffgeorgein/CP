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

int n,t;
string a,b,c;

cin>>t;
while(t--)
{
    int f=0;
    int k=0;
    cin>>a>>b>>c;
    n=a.length();
   
    for(int i=0;i<n;i++){


        if(a[i]==b[i] && b[i]==c[i]){
            k+=1;
        }
        else if(a[i]==c[i] || b[i]==c[i] ){
            k+=1;

        }
        else{
            
            f=1;
            break;
        }

    }
    if(k==n && f==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   

    }
}
