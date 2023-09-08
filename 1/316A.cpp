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

     int n,m;;
    cin>>n>>m;
    map<int,int>m1;
    int ma2=-1,pos1=-1;

    while(m--){

        int ma1=-1;

     vector<int>a(n);
     vector<int>b;
     for(int i=0;i<n;i++){
         cin>>a[i];
         if(a[i]>ma1){
             ma1=a[i];
         }
     }
     for(int i=0;i<n;i++){
         if(a[i]==ma1){
             b.push_back(i+1);
         }
     }
     m1[b[0]]++;
     ma2=max(ma2,m1[b[0]]);

    


    }
    for(auto i=m1.begin();i!=m1.end();i++){
        if(i->second==ma2){
            cout<<i->first<<n1;
            break;
        }
    }


}