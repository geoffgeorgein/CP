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
    vector<int>b;
    
    map<int,int>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){

        if(i==n-1){
            
                b.push_back(a[i]);
         
            break;
        }
        if(a[i]!=a[i+1]){

        
        b.push_back(a[i]);
    }

    }
    int f=0,l=0;
    for(int i=0;i<b.size();i++){
      //  cout<<b[i]<<" ";
        m[b[i]]++;
        if(f==0&&b[i]==a[0]){
            m[b[i]]-=1;
            f=1;
        }
        if(l==0&&b[i]==a[n-1]){
            m[b[i]]-=1;
            l=1;
        }
    }
    //cout<<n1;
    
    
    
    int ma=2e5+7;
    int c=0;

    for(auto i=m.begin();i!=m.end();i++){

        //cout<<i->second+1<<" ";
        if(i->second<ma){
            ma=i->second;
        }
        

    }
    cout<<ma+1;
    cout<<n1;



    }
}