#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include<map>

#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

//const char n1='\n';

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


        
    long long n1;

    cin>>n1;

    string s=to_string(n1);
    int n=s.length();

    vector<int>a;
    int d;
    int c=0;
    while(n1>0&&c<n-1){

         d=n1%10;
        if(9-d<d){
            a.push_back(9-d);
        }
        else{
            a.push_back(d);
        }
        c+=1;
        n1/=10;
    }
   // cout<<n1<<'\n';
   
    if(9-n1<n1&&(9-n1)!=0){
        a.push_back(9-n1);
    }
    else{
        a.push_back(n1);
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i];
    }
    cout<<'\n';
    
  

}


