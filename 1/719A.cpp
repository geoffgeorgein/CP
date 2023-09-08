/* Read input from STDIN. Print your output to STDOUT*/

#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
    int n,t,k;
    
    cin>>t;

    while(t--){

        
        string s;
        map<char,int>m;
        char l;
        int f=0;

        cin>>n>>s;

        for(int i=0;i<n;i++){

            if(m[s[i]]==0){
                m[s[i]]+=1;
                continue;


            }
            if(i==0){
               l=s[i]; 
            }
            else{
                if(s[i]!=s[i-1] && m[s[i]]>0){

                    cout<<"NO";
                    f=1;

                    break;

                }
            }
            m[s[i]]+=1;


        }

        if (!f){
            cout<<"YES";
        }




         cout<<endl;
    }

   

}



