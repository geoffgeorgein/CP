// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int l[n];
       for(int i=0;i<n;i++){
           
           l[i]=0;
       }
       l[0]=1;
       int ma=0;
       for(int i=1;i<n;i++){
           
           l[i]=1;
           for(int j=0;j<i;j++){
               
               if(a[i]>a[j]&&l[i]<l[j]+1){
                   l[i]=l[j]+1;
               }
           }
       }
       for(int i=0;i<n;i++){
           ma=max(l[i],ma);
       }
       return ma;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends