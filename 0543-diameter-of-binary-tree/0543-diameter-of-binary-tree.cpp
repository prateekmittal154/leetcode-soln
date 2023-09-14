class Solution {
public:
    
    int helper(TreeNode* root, int& maxi){
        if(root==NULL) return 0;
        int lh = helper(root->left ,maxi);
        int rh = helper(root->right,maxi);
        maxi = max(lh+rh, maxi);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        helper(root,maxi);
        return maxi;
    }
};