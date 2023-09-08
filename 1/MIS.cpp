// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    
	    int ma=0;
	    int dp[n+1];
	    for(int i=0;i<=n;i++){
	        dp[i]=arr[i];
	    }
	   // dp[0]=arr[0];
	    
	    
	    for(int i=1;i<n;i++){
	        
	        for(int j=0;j<i;j++){
	            
	            if(arr[j]<arr[i]&& dp[i]<dp[j]+arr[i]){
	                dp[i]=dp[j]+arr[i];
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        ma=max(ma,dp[i]);
	    }
	    return ma;
	    
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends