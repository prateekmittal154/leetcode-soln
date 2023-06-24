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
public:
    BSTIterator(TreeNode* root) {
        push_all(root);
    }
    
    int next() {
        TreeNode* temp = stack.top();
        stack.pop();
        push_all(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        return !stack.empty();
    }
    
    void push_all(TreeNode* root){
        while(root){
            stack.push(root);
            root = root->left;
        }
        return;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */