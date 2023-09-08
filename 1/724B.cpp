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

    
	    
	    int n;
        cin>>n;
        string s;
        int f=0;

        cin>>s;
        string ch="a";
        for(int i=0;i<26;i++){
            
            size_t p=s.find(ch);

            if(p==string::npos){
                f=1;
                break;
            }
            else{
                ch[0]+=1;
            }
        }
        //cout<<f<<'\n';
        if(f==1){
            cout<<ch;
        }
        else{
            ch="aa";
            for(int i=0;i<26;i++){
                ch[1]='a';

                for(int j=0;j<26;j++){

                     size_t p=s.find(ch);

                    if(p==string::npos){
                        f=1;
                        break;
                    }
                    else{
                        ch[1]+=1;
                    }
                }
                if(f){
                    break;
                }
                ch[0]+=1;
                
             }
             if(f){
                 cout<<ch;
             }
             else{
                 ch="aaa";

                 for(int i=0;i<26;i++){
                     ch[1]='a';
                     ch[2]='a';

                     for(int j=0;j<26;j++){
                         ch[2]='a';

                         for(int k=0;k<26;k++){

                             size_t p=s.find(ch);

                            if(p==string::npos){
                                f=1;
                                break;
                            }
                            else{
                                ch[2]+=1;
                            }
                         }
                         if(f==1){
                             break;
                         }
                         ch[1]+=1;
                     }
                     if(f){
                         break;
                     }
                     ch[0]+=1;
                 }
                 cout<<ch;
             }

             
             
        }
      
      

        cout<<'\n';

    }
    
	    

}


