// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

int LIS(vector<int> arr) 
    {
       // your code here
       int n=arr.size();
       int l[n];
       
       vector<int>p;
       
       for(int i=0;i<n;i++){
           
           if(lower_bound(p.begin(),p.end(),arr[i])==p.end()){
               p.push_back(arr[i]);
               
           }
           else{
               int pos1=lower_bound(p.begin(),p.end(),arr[i])-p.begin();
               
               p[pos1]=arr[i];
               
           }
       }
  
       return (p.size());
       
       
    }

// { Driver Code Starts.
int main()
{
        #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //taking total testcases
    int t,n;
  
        //taking size of array
        cin>>n;
        vector<int>a(n);
        
        //inserting elements to the array
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int r=LIS(a);
        cout<<r<<'\n';
    
}
  // } Driver Code Ends