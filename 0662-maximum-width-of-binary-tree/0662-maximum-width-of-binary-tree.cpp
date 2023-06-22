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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        
        int ans = 0;
        queue<pair<TreeNode*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty()){
            
            int size = q.size();
            int curmin = q.front().second;
            int leftmost,rightmost = 0;
            for(int i=0; i<size; i++){
            long curid = q.front().second-curmin;
            TreeNode* node_temp = q.front().first;
            q.pop();
            if(i==0) leftmost = curid;
            if(i==size-1) rightmost = curid;
            if(node_temp->left) q.push({node_temp->left, curid*2+1});
            if(node_temp->right) q.push({node_temp->right, curid*2+2});
            }
            
            ans = max(ans, rightmost-leftmost+1);
        }
       
        
        return ans;
    }
};