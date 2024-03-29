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
    
   TreeNode* solver(TreeNode* root, int& k){
        if(root==NULL) return NULL;
        
        TreeNode* left = solver(root->left, k);
        if(left != NULL) return left;
        
        k--;
        if(k==0) return root;
        
        return solver(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        return solver(root,k)->val;
    }
};