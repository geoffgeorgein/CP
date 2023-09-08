#include<bits/stdc++.h>
using namespace std;

#define all(x)      (x).begin(),(x).end()
#define rall(x)     x.rbegin(),x.rend()
#define pb          push_back
#define ppb         pop_back
#define pf          push_front
#define ppf         pop_front
#define F           first
#define S           second
#define ll          long long
#define mem0(x)     memset((x), 0, sizeof((x)))
#define mem1(x)     memset((x), -1, sizeof((x)))

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

int pow1(int n,int p)
{
    int i,sum=1;
    for(i=1;i<=p;i++) sum*=n;
    return sum;
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

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0,d=0;
        int pos1=0,pos2=n-1;
        ll p1=0,p2=0,s1=0,s2=0;
        while(c<=n&&pos1<=pos2){
            
            if(c%2==0){
                p1=0;
                
                while(p1<=p2&&pos1<pos2+1){
                    p1+=(ll)a[pos1];
                    pos1++;
                


                }
                s1+=p1;
                c++;
              //  p1-=s1;
            }
            else{
                p2=0;
                while(p2<=p1&&pos1-1<pos2){
                    p2+=(ll)a[pos2];
                    pos2--;
                    
                }
                s2+=p2;
                c++;
               // p2-=s2;
            }
            
            
        
        }
        cout<<c<<" "<<s1<<" "<<s2;


 
        cout<<n1;
    }

   

   

}
