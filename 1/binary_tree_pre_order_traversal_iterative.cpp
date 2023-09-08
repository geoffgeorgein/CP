/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>a;
        
        nodes(root,a);
        
        return a;
    }
    
    void nodes(TreeNode* root, vector<int>&a){
        
        if(root==NULL){
            return;
        }
        
        a.push_back(root->val);
        nodes(root->left,a);
        nodes(root->right,a);
    }
};