#include<bits/stdc++.h>
using namespace std;

#define all(x)  (x).begin(),(x).end()
#define pb         push_back
#define ppb        pop_back
#define pf         push_front
#define ppf        pop_front
#define F          first
#define S          second

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

// Driver function to sort the vector elements
// by second element of pairs
bool sortsec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
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
     

         for(int i=2;i<=n;i+=2){
             cout<<i<<" ";
             if(n%2!=0&&i==n-1){
                 cout<<i+1<<" ";
             }
             cout<<i-1<<" ";
         }
     
 
     
    cout<<n1;

    }
}