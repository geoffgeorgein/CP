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
#define vi          vector<int>
#define vd          vector<double>
#define vf          vector<float>
#define vii         vector<vector<int>>
#define vll         vector<ll>
#define vlll        vector<vll> 
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define mpii        map<int,int>
#define mpll        map<ll,ll>
#define itr         ::iterator
#define setbits(x)     __builtin_popcount(x)
#define mem0(x)        memset((x), 0, sizeof((x)))
#define mem1(x)        memset((x), -1, sizeof((x)))
#define deb(x)         cout << #x << "=" << x << endl
#define deb2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for0(i, n)   for (int i = 0; i < (int)(n); i++)            // 0 based indexing
#define for1(i, n)   for (int i = 1; i <= (int)(n); i++)           // 1 based


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


int powmod(int a,int n){
    int res=1;

    while(n){
        if(n%2){
            res=(res*a)%mod;
            n-=1;

        }
        else{
            a=(a*a)%mod;
            n/=2;

        }
    }
    return res;
}

int main(){
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   // cout << fixed << setprecision(9); 
   
    
    int t;

    cin>>t;

    while(t--){

        int n;
        cin>>n;
        
        string s,p;

        cin>>s>>p;

        map<char,int>m1;

        int f=0;

        for0(i,n){

            if(s[i]=='?'){
                if(p[i]!='?'){
                    m1[p[i]]++;
                }
                f=1;
            }
            else if(p[i]=='?'){

                if(s[i]!='?'){
                    m1[s[i]]++;
                }
                f=1;
            }
        }
        char ch=' ';

        string x=s;
        string y=p;

        vector<char>q;
        q.pb('a');
        q.pb('e');
        q.pb('i');
        q.pb('o');
        q.pb('u');
        

        
        char ch2=' ';

        if(m1.size()>0){

            auto it=m1.end();
            it--;
            ch=it->F;
            int k1=m1.size();
            int k2=0;
            while(k2<k1){

                if(it->F=='a'|| it->F=='e' || it->F=='i' ||it->F=='o'||it->F=='u'){
                    ch2=it->F;
                    break;
                }
                k2++;
                it--;
            }

            for0(i,n){

                if(s[i]=='?'){
                    s[i]=ch;
                }
                if(p[i]=='?'){
                    p[i]=ch;
                }
            }

            if(ch2!=' '){

                for0(i,n){
                    if(x[i]=='?'){
                        x[i]=ch2;
                    }
                    if(y[i]=='?'){
                        y[i]=ch2;
                    }
                }
            }
            else{
                if(binary_search(all(q),ch)){

                    ch2='c';

                }
                else{
                    ch2='e';
                }
                for0(i,n){
                    if(x[i]=='?'){
                        x[i]='e';
                    }
                    if(y[i]=='?'){
                        y[i]='i';
                    }
                }
            }


        }
        else if(f==1){

            for0(i,n){
                if(s[i]=='?'|| p[i]=='?'){
                    s[i]='a';
                    p[i]='a';
                }
            }
        }

       // deb(ch);

       // deb(s);
       // deb(p);

        
        int ans=0,ans2=0;
       // deb(ch2);
       // deb(x);
       // deb(y);
        

        for0(i,n){

            if(s[i]!=p[i]){

                if(binary_search(all(q),p[i]) == binary_search(all(q),s[i])){
                    //cout<<"case 1"<<n1;
                    ans+=2;
                }
                else{
                    ans+=1;
                }
            }

            if(x[i]!=y[i]){

                if(binary_search(all(q),y[i]) == binary_search(all(q),x[i])){
                    //cout<<"case 1"<<n1;
                    ans2+=2;
                }
                else{
                    ans2+=1;
                }
            }
            //deb(ans);
        }
        //deb(ans2);

        cout<<min(ans,ans2);
        


      

        cout<<n1;
    }

 
}