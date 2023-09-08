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
        vector<int>a(n);
        long long anse=0;
        long long anso=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.rbegin(),a.rend());

        for(int i=0;i<n;i++){

            if(i%2==0){
                if(a[i]%2==0){
                    anse+=a[i];
                }
            }
            else{
                if(a[i]%2!=0){
                    anso+=a[i];
                }
                
            }
        }

        if(anse>anso){
            cout<<"Alice";
        }
        else if(anso>anse){;
            cout<<"Bob";
        }
        else{
            cout<<"Tie";
        }

        cout<<'\n';

    
    }
	    

}


