#include <iostream>

#include<bits/stdc++.h>
using namespace std;

char solve (string s) {
   // Your code goes here
   // s is the given input string
   

    
    int mx1=0,mx2=0;

    
    char p=' ',q=' ';

    map<char,int>m1;

    

    int n=s.length();

    for(int i=0;i<n-1;i++){

        if(s[i]==s[i+1]){
            int ct=0;
            while(i<n-1 && s[i]==s[i+1]){
                ct++;
                i++;
            }
           // deb(mx1);

            if(i==n-1){
                if(ct>=mx1){
                    mx2=mx1;
                    mx1=ct;
                    q=p;
                    p=s[i];
                    continue;


                }
            }

            if(ct>mx1){
                mx2=mx1;
                mx1=ct;
                q=p;
                p=s[i];
            }
            // else{
            //     if(ct>mx2){
                    
            //     }
            // }
        }
        

        }
    
   return q;
  
}

// The main function reads the input in the required format.
// Just complete the solve function above.
int main() {

     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        string s;
        cin >> s;
        char out_;
        out_ = solve(s);
        cout << out_;
        cout << "\n";
    }
}