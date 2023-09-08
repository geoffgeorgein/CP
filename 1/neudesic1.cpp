
#include<bits/stdc++.h>


#define deb(x)         cout << #x << "=" << x << endl

using namespace std;

int main(){

     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int mx1=0,mx2=0;

    string s;
    char p=' ',q=' ';

    map<char,int>m1;

    cin>>s;

    int n=s.length();

    for(int i=0;i<n-1;i++){

        if(s[i]==s[i+1]){
            int ct=0;
            while(i<n-1 && s[i]==s[i+1]){
                ct++;
                i++;
            }
            deb(mx1);

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
    
    cout<<q;
}