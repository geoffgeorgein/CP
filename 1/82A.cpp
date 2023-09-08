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


string s;
int t,q,n;


cin>>t;
while(t--){
    cin>>s;
    int z=0;int p=0;
    n=s.length();
    int c=0;
    for(int i=0;i<n;i++){
        //cout<<s[i]<<" ";
        if(s[i]=='1'){

            if (p)
            {
                z+=c;
                
                
            }
            p=1;
            c=0;
           
        }
        else{
            c+=1;
        }
        

        }
            
            
           // cout<<"YES";

    
cout<<z<<endl;
}
}

