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
    cin>>t;
    while(t--){

     int n; 
     cin>>n;

     vector<int>a(n);
    vector<int>b(n);
    int pos1=1e5+1,pos2=1e5+1,f1=0,f2=0,f=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1&&f1==0){
            pos1=i;
            f1=1;
        }
        if(a[i]==-1&&f2==0){
            pos2=i;
            f2=1;
        }
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<b[i]&&pos1>=i || a[i]>b[i]&&pos2>=i){
            f=1;
            break;
        }
    }
    cout<<(!f?"YES":"NO");


    
    cout<<n1;

    }
}