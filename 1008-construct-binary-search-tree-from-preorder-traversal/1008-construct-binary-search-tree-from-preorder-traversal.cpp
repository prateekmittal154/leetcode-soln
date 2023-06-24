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
    
    TreeNode* solver(vector<int>& preorder, int& i, int bound){
        if(i==preorder.size()||preorder[i]>=bound) return NULL;
        
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = solver(preorder,i,root->val);
        root->right = solver(preorder,i,bound);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return solver(preorder,i, INT_MAX);
    }
};