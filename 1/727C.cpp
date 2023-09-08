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

    long long n,k,x;

    cin>>n>>k>>x;
    vector<long long>a(n);
     vector<long long>l;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long d=0;
     sort(a.begin(),a.end());

    for(int i=0;i<n-1;i++){

        if(a[i+1]-a[i]>x){

        l.push_back(a[i+1]-a[i]);
        }


    }

    sort(l.begin(),l.end());
    int pos=-1;

    for(int i=0;i<l.size();i++){
        if((l[i]-1)/x >k){
            pos=l.size()-i;
            break;
        }
        else{
            k-=(l[i]-1)/x;
        }
    }
    if(pos==-1){
        cout<<1;
    }
    else{
        cout<<pos+1;
    }
    cout<<n1;

   


}