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

     int n,l=-1,f=0,c=0;
     cin>>n;
     vector<int>a(n);
    
     map<int,int>m;

     for(int i=0;i<n;i++){
         cin>>a[i];
         
         
     } 
     int pos1=n,pos2=-1;
    // sort(a.begin(),a.end());
    
    for(int i=n-1;i>0;i--){

        if(a[i]>a[i-1]){
            pos1=i;
            break;
        }

    }
    if(pos1==n){
        cout<<0;
    }
    else{
        for(int i=1;i<pos1;i++){

            if(a[i]<a[i-1]){
                pos2=i;


            }
        }
        if(pos2==-1){
            cout<<0;
                    }

        else{
            cout<<pos2;
        }
    }

    
    cout<<n1;

    }
    }

