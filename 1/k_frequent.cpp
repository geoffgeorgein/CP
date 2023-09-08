#include <bits/stdc++.h>

#define deb(x)         cout << #x << "=" << x << endl

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> nums, int k) {
        
        map<int,int>m1;
        
        vector<int>a;
        
        vector<vector<int>>p(nums.size()+1);
        
        for(int i=0;i<nums.size();i++){
            
            m1[nums[i]]++;
            
        }
        
        for(auto i=m1.begin();i!=m1.end();i++){
            
            p[i->second].push_back(i->first);
            
        }
        
        for(int i=p.size()-1;i>=0 && a.size()<k;i--){
            
            for(int j=0;j<p[i].size()&& a.size()<k;j++){
                
                a.push_back(p[i][j]);
            }
        }
        
        
        
        return a;
        
        
        
    }
};

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif
    
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;

		cin>>n>>k;

		vector<int>v(n);
		for(int i=0; i<n; i++){
		    cin>>v[i];
        }
			
        Solution ob;
		cout<<ob.topKFrequent(v,k)<<endl;
	}
	//return 1;
}