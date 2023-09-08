#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const char n1='\n';

const int mod=1e9+7;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int arr[], int n)
{
    // Initialize result
    int ans = arr[0];
 

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

int main() {

    speed;
    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	// your code goes here
	int t;

    cin>>t;

    while(t--){

        int n,d;
        string s;
        cin>>n;
        cin>>s;
       
        int f=0;
        string a="";
        string b="";
        

        for(int i=0;i<n;i++){

        
            if(s[i]=='2'){
                if(f==0){
                a+="1";
                b+="1";
                }
                else{
                    a+="0";
                    b+="2";
                }
            }
            else if(s[i]=='0'){
                
               a+="0";
               b+="0";
               
            }
            else{
                if(f==0){
                    a+="1";
                    b+="0";
                    f=1;
                   
                }
                else{
                   a+="0";
                   b+="1";
                }


            }
            
            
        }
        cout<<a<<n1<<b<<n1;
        }

}


