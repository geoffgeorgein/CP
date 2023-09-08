#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'getPhoneNumber' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string getPhoneNumber(string s) {
    
    map<string,string>m1;
    int n=s.length();
    
    m1["one"]="1";
    m1["two"]="2";
    m1["three"]="3";
    m1["four"]="4";
    m1["five"]="5";
    m1["six"]="6";
    m1["seven"]="7";
    m1["eight"]="8";
    m1["nine"]="9";
    m1["zero"]="0";
    
    vector<string>a;
    
    for(int i=0;i<n;i++){
        string k="";
        while(s[i]!=' '&&i<n){
            k+=s[i];
            i++;
            
        }
        a.push_back(k);
    }
    
    string ans="";
    
    for(int i=0;i<a.size();i++){
        
        if(a[i]=="double"){
           i++;
            ans+=m1[a[i]];
            ans+=m1[a[i]];
        }
        
        else if(a[i]=="triple"){
            i++;
            ans+=m1[a[i]];
            ans+=m1[a[i]];
            ans+=m1[a[i]];
            
        }
        else{
            ans+=m1[a[i]];
        }
     
   
    }

    //cout<<a[a.size()-1]<<'\n';
   // cout<<m1["zero"]<<'\n';
       
        
    return ans;   
    

}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    string result = getPhoneNumber(s);

    cout <<result<<"\n";

   // fout.close();

    return 0;
}
