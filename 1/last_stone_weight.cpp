#include <bits/stdc++.h>

#define deb(x)         cout << #x << "=" << x << endl

using namespace std;


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        //sort(stones.begin(),stones.end());
        
        multiset<int>s;
        
        int n=stones.size();
        
        for(int i=0;i<n;i++){
            //cout<<stones[i]<<" ";
            s.insert(stones[i]);
        }
        
        while(s.size()>=2){
            
            auto it=s.end();
            it--;
            
            int a=*it;
            //deb(a);
            s.erase(it);
            
            it--;
            int b=*it;
           // deb(b);
            
            int d=(a-b);
            
            s.erase(it);
            
            if(d>0){
                s.insert(d);
            }
            
            
        }
        deb(s.size());
        
        if(s.size()==0){
            return 0;
        }
        
        auto it=s.begin();
        return *it;
    }
};

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

		 vector<int>v(n);
		for(int i=0; i<n; i++)
			cin>> v[i];
			
        Solution ob;
		cout<< ob.lastStoneWeight(v) << endl;
	}
	//return 1;
}