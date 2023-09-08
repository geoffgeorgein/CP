#include<bits/stdc++.h>
using namespace std;

const char n1='\n';
const int mod=1e9+7;
const int maxn=1e5+7;

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
vector<int>l;
bool prime[maxn+1];


void primesieve(int n){
    memset(prime,1,maxn);


prime[0]=0;prime[1]=0;
for (int i=2;i*i<=n;i++){

    if (prime[i]==1){

        for(int j=i*i;j<=n;j+=i){
            prime[j]=0;
        }
    }
}



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
    primesieve(maxn);

    int n2=n+1,c=1,d=0;
    while(n2/c>1){

        c=c*2;
        
        d++;

    }
    if(n==1){
        cout<<1<<n1;
        cout<<1<<n1;
    }
    else if(n==2){
        cout<<1<<n1;
        cout<<1<<" "<<1<<n1;
    }
    else{
        cout<<2<<n1;
       // c=1,d=0;
        for(int i=2;i<=n+1;i++){

            if(prime[i]==1){
               cout<<1<<" ";
            }
            else{
                cout<<2<<" ";
            }

        }
    }
}