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
bool issquare(int x){
        int y=sqrt(x);

        return (y*y==x);
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
            int n,k;
            string s;

            cin>>n>>k;
            int f,l;
            cin>>s;
            for(int i=0;i<n;i++){

                if(s[i]=='*'){
                    f=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){

                if(s[i]=='*'){
                    l=i;
                    break;
                }
            }

            int m=0,c=0;
            int fk=f+k;


            for(int i=f+1;i<l;i++){

                if(s[i]=='*'){
                    m=i;
                }
                if(i==fk){
                    
                    fk=m+k;
                    c+=1;
                }
            }


            cout<<max(2*(f!=l)+c,1);
            cout<<'\n';
        }
        
 

}


