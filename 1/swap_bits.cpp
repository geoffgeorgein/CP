// { Driver Code Starts
#include<bits/stdc++.h>


#define deb(x)         cout << #x << "=" << x << endl

using namespace std;

 // } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        
        vector<int>a,b,c(16);
        
        for(int i=0;i<16;i++){
            
            
                
                if(i==p1){
                    while(i<n+p1){
                        a.push_back((x>>i)&1);
                        i++;
                    }
                }
                
                if(i==p2){
                    
                    while(i<n+p2){
                        
                        b.push_back((x>>i)&1);
                        i++;
                    }
                }
                
                c[i]=((x>>i)&1);
                
            
        }
       // deb(b.size());
        
        for(int i=0;i<16;i++){
            
            if(i==p1){
                int ct=0;
                while(i<n+p1){
                    
                    c[i]=b[ct];
                    i++;
                    ct++;
                }
                    
            }
            if(i==p2){
                int ct=0;
                while(i<n+p2){
                    c[i]=a[ct];
                    ct++;
                    i++;
                }
            }
            
        }
        
        int d=0;
        
        for(int i=0;i<16;i++){
            
            if(c[i]){
                
                d+=(1<<i);
            }
        }
       // deb(a.size());
       // deb(b.size());
        

        //  for(int i=0;i<10;i++){
        //      cout<<c[i];
        //  }
        //  cout<<'\n';
        
        return d;
        
        
    }
};

// { Driver Code Starts.

 
int main()
{

      #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}  // } Driver Code Ends