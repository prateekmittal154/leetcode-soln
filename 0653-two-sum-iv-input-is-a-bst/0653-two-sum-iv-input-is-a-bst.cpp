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
class BSTIterator {
    private:
    stack<TreeNode*> stack;
    bool reverse = true;
public:
    BSTIterator(TreeNode* root, bool isReverse) {
        reverse = isReverse;
        push_all(root);
    }
    
    int next() {
        TreeNode* temp = stack.top();
        stack.pop();
        if(!reverse) push_all(temp->right);
        else push_all(temp->left);
        return temp->val;
    }
    
    bool hasNext() {
        return !stack.empty();
    }
    
    void push_all(TreeNode* root){
        while(root){
            stack.push(root);
            if(reverse) root = root->right;
            else root = root->left;
        }
        return;
    }
};


class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        
        if(root == NULL) return false;
        BSTIterator l(root, false);
        BSTIterator r(root, true);
        int i = l.next();
        int j = r.next();
        
        while(i<j){
            if(i+j == k) return true;
            else if ( i+j<k) i = l.next();
            else j = r.next();
        }
        return false;
        
    }
};