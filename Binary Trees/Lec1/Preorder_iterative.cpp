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
        vector<int> ans;
        if (root==NULL) {return ans;}
        stack<TreeNode*> q;
        TreeNode *t;
        q.push(root);
        while(!q.empty()) {
            t = q.top();
            q.pop();
            ans.push_back(t->val);
            if (t->right != NULL) {
                q.push(t->right);
            }
            if (t->left != NULL) {
                q.push(t->left);
            }
        }
        return ans;
    }   
};
