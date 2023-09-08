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
    int c[10]={1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};

    while(t--){

        
        string s;
        
        cin>>n;
        s=to_string(n);

        

        cout<<(9*(s.length()-1))+(n/(c[s.length()-1]));

       

         cout<<endl;
    }

   

}



