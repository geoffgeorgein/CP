class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>m1;
        
        vector<int>a;
        
        for(int i=0;i<nums.size();i++){
            
            m1[nums[i]]++;
        }
        
        vector<pair<int,int>>p1;
        
        for(auto i=m1.begin();i!=m1.end();i++){
            
            p1.push_back({i->second,i->first});
        }
        
        sort(p1.rbegin(),p1.rend());
        
        for(int i=0;i<k;i++){
            a.push_back(p1[i].second);
        }
        
        return a;
        
        
        
    }
};