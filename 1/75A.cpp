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

    int t,n;
    string s;
    cin>>t;


    while(t--){
        int i=0;
        string res="";
        string a="";
        cin>>s;
        n=s.length();
        vector<char>v;

        if (n==1){
            cout<<s<<endl;
            continue;
        }
        while (i<n){

            if(s[i]!=s[i+1]){
                res+=s[i];
            }
            else{
                i=i+1;
            }
            i+=1;
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.length();i++){
            if (binary_search(v.begin(),v.end(),res[i])==0){
                v.push_back(res[i]);
                a+=res[i];
            }
        }
        cout<<a<<endl;


    }

}
