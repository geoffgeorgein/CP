// { Driver Code Starts
#include <bits/stdc++.h>

#define deb(x)         cout << #x << "=" << x << endl

using namespace std;



 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        
        sort(ranges.begin(),ranges.end());
        
        vector<vector<int>>a;
        int ct=0;

        a.push_back({ranges[0][0],ranges[0][1]});

        for(int i=0;i<ranges.size()-1;i++){
            
            //deb(ranges[ct][1]);
            //deb(ranges[i+1][0]);
            
            if(a[ct][1]<=ranges[i+1][0]){
                
                a.push_back({ranges[i+1][0],ranges[i+1][1]});
                ct++;
            }
            else{
                
                if(a[ct][1]>ranges[i+1][1]){
                    a[ct][0]=ranges[i+1][0];
                    a[ct][1]=ranges[i+1][1];
                }
                
                
            }
            
            
        }

        // for(int i=0;i<a.size();i++){

        //    // deb(i);
        //     cout<<a[i][0]<<" "<<a[i][1]<<'\n';
        // }
        
        return a.size();
    }
};

// { Driver Code Starts.

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends