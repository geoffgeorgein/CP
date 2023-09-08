#include<bits/stdc++.h>
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
int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

long long m,n,c,d,s=0;

cin>>n>>m;

if(m==1){
    
    cout<<(n*(n-1)/2)<<" "<<(n*(n-1)/2);
}
else{
    if(n/m>1){
        c=n-(m-1);
        d=n/m;
        s=(d*(d-1))/2;
        cout<<s*m<<" "<<(c*(c-1)/2);
    }
    else{
        if(m>=n){
            cout<<0<<" "<<0;
        }
        else{
            c=n-(m-1);

            cout<<n%m<<" "<<(c*(c-1))/2;
        }
        
    }
}
cout<<n1;


}