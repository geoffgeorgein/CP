#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
     vector<vector<int>> subsets(vector<int>&nums){
        
        vector<int>b;
        vector<vector<int>>a;
       // a.push_back({});
        
        backtrack(nums,a,0,b);
         
        return a;
        
        
        
    }
     void backtrack(vector<int>& nums,vector<vector<int>>&a,int pos,vector<int>&b) {
        
       
        
      //  int pos=0;
         a.push_back(b);
        
        for(int i=pos;i<nums.size();i++){
            
            b.push_back(nums[i]);
            
            backtrack(nums,a,i+1,b);
            b.pop_back();
        }
         
        
            
    
        
        
        
    }
};