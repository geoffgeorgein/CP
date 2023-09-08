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

    string s;
    int c=0,d=0,f=0,pos=0;
    long long r=0;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='-'){
            c--;
        }
        else{
            c++;
        }

        if(c<0){
            d++;
            c++;
            r+=(long long)(i+1);
            if(f==0){
                pos=i;
                f=1;
                
            }
        }
    }
    cout<<(r)+s.length();
    
    cout<<n1;

    }
}