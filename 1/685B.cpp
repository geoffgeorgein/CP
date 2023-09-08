#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    
     int n,t,q;
    
    cin>>t;
    while(t--){
        
        cin>>n>>q;

        string s;

        cin>>s;

        while(q--){
            int l,r;
            cin>>l>>r;
            int f=0;

            for(int i=0;i<l-1;i++){

                if(s[i]==s[l-1]){
                    f=1;
                }
            }
            for(int i=r;i<n;i++){

                if(s[i]==s[r-1]){
                    f=1;
                }
            }
            if(f==0){
                cout<<"NO";

            }
            else{
                cout<<"YES";
            }
            cout<<endl;
        }
       
        
        }

   

}