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
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin>>t;

    while(t--){

        int n,c=0;

        cin>>n;

        if(n==1){
            cout<<"FastestFinger";
        }
        else if(n%2!=0||n==2){
            cout<<"Ashishgup";
        }
        else if(n&(n-1)==0){
            cout<<"FastestFinger";
        }
        else if(n%4==0){
            cout<<"Ashishgup";
        }
        else{
            n>=2;
            int f=0;
            for(int i=2;i*i<=n;i++){

                if(n%i==0){
                    f=1;
                }
            }
           
            if(f==0){
                cout<<"FastestFinger";
            }
            else{
                cout<<"Ashishgup";
            }
        }
        
        cout<<n1;
    }

   

   

}
