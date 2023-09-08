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

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>c(n-2);
    vector<int>b(n-1);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>c[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());

    int f1=0,f2=0;
    int pos1=n-1,pos2=n-2;

    for(int i=0;i<b.size();i++){
         
        if(a[i]!=b[i]){
            pos1=i;
            break;

        }
    }
 /*    for(int i=0;i<n-2;i++){
         cout<<c[i]<<" ";
     }
     cout<<n1;
     */
    for(int i=0;i<c.size();i++){
         
        if(b[i]!=c[i]){
           pos2=i;
            break;
        }
    }
    cout<<a[pos1]<<n1<<b[pos2];



}