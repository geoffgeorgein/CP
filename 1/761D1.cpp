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

    int t;
    

    int n; 
    cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout<<n/2-(n%2==0?1:0)<<n1;

    for(int i=0;i<=n/2;i++){

        if(n%2==0&&i==n/2){
            break;
        }
        cout<<a[n-i-1]<<" ";
        if(n%2!=0&&i==n/2){
            break;
        }
        cout<<a[i]<<" ";
        

    }
    
    cout<<n1;

    
}