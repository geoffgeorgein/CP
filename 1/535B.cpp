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
	int n;
   

    cin>>n;


    vector<int>a(n);
    map<int,int>m;
  
    int r=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]+=1;
        
       
    }
    sort(a.rbegin(),a.rend());
    int ma=a[0];
    
    for(int i=1;i<n;i++){

        if(ma%a[i]!=0||a[i]==a[i-1]){
           r=a[i];
           break;
            
        }
    }
    cout<<r<<" "<<ma;
 
  
}


