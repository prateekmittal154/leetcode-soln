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
    
    int solver(TreeNode* root, int &maxi){
        if(root==NULL) return 0;
        
        int ls = max(0,solver(root->left,maxi));
        int rs = max(0,solver(root->right,maxi));
        maxi = max(maxi, ls+root->val+rs);
        
        return max(ls+root->val, rs+root->val);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        solver(root,maxi);
        return maxi;
    }
};