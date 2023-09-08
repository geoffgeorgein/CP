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
	


    
	    
	    int m,s;
        cin>>m>>s;
      
        int d=s/9;
        int r=s%9;

        if(d+(r>0)>m || (s==0&&m>1)){
            cout<<-1<<" "<<-1;
            return 0;

             
        }

        if((m-(d+(r>1)))>0){
            cout<<1;
            int f=0;
            int c=1;

                for(int i=0;i<min((m-(d+(r>1)))-1,m-1);i++){
                    cout<<0;
                    c+=1;
                    
                }
                if(r>0&&c<m){
                    cout<<r-1;
                    f=1;
                }
                for(int i=0;i<d;i++){
                    if(f==0 &&i==0){
                        cout<<8;
                        continue;
                    }

                cout<<9;
                }
                cout<<" ";
                for(int i=0;i<d;i++){
                    
                    
                    cout<<9;
                }
                 c=0;
                if(r>0){
                    cout<<r;
                    c+=1;
                }
                for(int i=0;i<(m-(d+(r>1)))&&c<m;i++){
                    cout<<0;
                    c+=1;
                }
        }
        else{

        
        if(r>0){
            cout<<r;
        }
        for(int i=0;i<(m-(d+(r>1)));i++){
            cout<<0;
        }

        for(int i=0;i<d;i++){

            cout<<9;
        }
        cout<<" ";
        for(int i=0;i<d;i++){

            cout<<9;
        }
        if(r>0){
            cout<<r;
        }
        for(int i=0;i<(m-(d+(r>1)));i++){
            cout<<0;
        }
        }
      
      

        cout<<'\n';

    
    
	    

}


