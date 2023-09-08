#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

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
	    
	    
        
        string s;

        cin>>s;
        int n=s.length();

        char a=s[0];
        char b=s[n-1];
        char d;
        if(a==b){
            cout<<"NO"<<'\n';
            continue;
        }
        vector<int>ct(3,0);

        for(int i=0;i<n;i++){

            if(s[i]=='A'){
                ct[0]+=1;
            }
            else if(s[i]=='B'){
                ct[1]+=1;
            }
            else{
                ct[2]+=1;
            }

            
        }

        if(ct[0]==n/2){
             d='A';
        }
        if(ct[1]==n/2){
            d='B';
        }
        if(ct[2]==n/2){
            d='C';
        }
        int p,q;
        if(s[0]==d){
             p=1;
             q=-1;
        }
        else{
            p=-1;
            q=1;
        }

        int h=0,g=0;
        for(int i=0;i<n;i++){

            if(s[i]==d){
                h+=p;
            }
            else{
                h+=q;
            }
            if(h<0){
                g=1;
                break;
            }

           
        }
        if(h==0 &&g==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

       
        cout<<'\n';

    
    }
	    

}


