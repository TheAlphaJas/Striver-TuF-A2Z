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
private:
    void preorder(TreeNode *node, vector<int> &ans) {
        ans.push_back(node->val);
        if (node->left != NULL) {
            preorder(node->left,ans);
        }
        if (node->right != NULL) {
            preorder(node->right,ans);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == NULL) {
        return {};
        }
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};
