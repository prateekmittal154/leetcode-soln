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
    
    TreeNode* solver(vector<int>& preorder, vector<int>& inorder, int pre_start, int pre_end, int in_start, int in_end, map<int,int>& mpp){
        
        if( pre_start > pre_end ||in_start > in_end ) return NULL;
        
        TreeNode* root = new TreeNode(preorder[pre_start]);
        
        int ele = mpp[root->val];
        int nele = mpp[root->val] - in_start;
        
        root->left = solver(preorder,inorder,pre_start+1,pre_start+nele, in_start, ele-1, mpp);
        root->right= solver(preorder,inorder,pre_start+nele+1,pre_end,ele+1,in_end,mpp);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int pre_start = 0 ; int pre_end = preorder.size()-1;
        int in_start  = 0;  int in_end = inorder.size()-1;
        
        map<int,int> mpp;
        
        for(int i=0; i<=in_end; i++){
            mpp[inorder[i]] = i;
        }
        
        return solver(preorder,inorder,pre_start,pre_end,in_start,in_end,mpp);
    }
};